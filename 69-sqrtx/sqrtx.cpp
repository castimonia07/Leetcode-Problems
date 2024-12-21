class Solution {
public:
    int mySqrt(int x) {
        // long long m=INT_MIN; 
        // long long n=0;
        // if(x==0 || x==1){
        //     return x;
        // }
        // for(long long i=0;i<x;i++){
        //     if(i*i<=x){
        //         n=i;
        //     }
        //     n=max(m,n);
        // }
        // return n;

        // long long i=x/2;
        // while(i*i>x){
        //     i--;
        // }
        // return i;
        long long n=sqrt(x);
        return n;
    }
};