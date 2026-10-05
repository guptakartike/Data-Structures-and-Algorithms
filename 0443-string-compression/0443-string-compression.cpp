class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int  i = 0, index = 0 ;
        
        while(i<n){
            char curr = chars[i];
            int count = 0; 
            while(i<n && chars[i]==curr){
                i++;
                count++;
            }
            
            chars[index] = curr;
            index++;
            if(count>1){
                string count_str = to_string(count);
                for(char ch : count_str){
                    chars[index]=ch;
                    index++;
                }
            }
           
            
            

        }
        return index;

    }
};