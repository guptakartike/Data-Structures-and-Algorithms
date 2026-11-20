class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        long long number = 0;
        long long result = 0;
        int sign = 1;

        for(char &ch:s){
            if(isdigit(ch)){
                number = number*10+(ch-'0');
            }
            else if(ch=='+'){
                result += number*sign;
                number = 0;
                sign=1;
            }
            else if(ch=='-'){
                result += number*sign;
                number = 0;
                sign=-1;
            }
            else if(ch=='('){
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
                number=0;
            }
            else if(ch==')'){
                result+=(number*sign);
                number=0;
                int st_sign = st.top();
                st.pop();
                int last_result = st.top();
                st.pop();

                result *=st_sign;
                result+=last_result;
            }
        }
        result+=(number*sign);
        return result;
    }
};