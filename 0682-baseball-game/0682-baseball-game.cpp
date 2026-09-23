class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int top=-1;
        for(int i=0;i<operations.size(); i++){
            if(operations[i]=="+"){
                int last = st.top(); 
                st.pop();
                int el = (st.top())+(last);
                st.push(last);
                st.push(el);
            } else if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                int el = (st.top())*2;
                
                st.push(el);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};