class Solution {
public:
    void rev(vector<char>& s, int left, int right){
        if(left>=right) return ;
        swap(s[left],s[right]);
        left++,right--;
        rev(s,left,right);
    }
    void reverseString(vector<char>& s) {
       int left=0, right=s.size()-1;
       rev(s,left,right);

    }
};