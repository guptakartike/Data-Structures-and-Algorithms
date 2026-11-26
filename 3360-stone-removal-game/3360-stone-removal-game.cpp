class Solution {
public:
    bool canAliceWin(int n) {
        bool alice = 1;
        int rem = n;
        int req=10;
        while(rem>=req){
            rem=rem-req;
            req=req-1;
            alice=!alice;
        }
        if(alice==1) return false;
        return true;
    }
};