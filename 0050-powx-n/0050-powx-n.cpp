class Solution {
public:
    double myPow(double x, long n) {
        if(n==0) return 1;
        double ans = 1;
        if(n<0) return myPow(1/x,-n);
        if(n%2==0) return myPow(x*x,n/2);
        else  return x * myPow(x*x,n/2);
        

    }
};