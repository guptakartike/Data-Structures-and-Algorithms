class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==3 || n==1) return true;
        if(n<3) return false;
        if(n%3==0) 
        return isPowerOfThree(n/3);
        else return false;
    }
};