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

        // long long n=sqrt(x);
        // return n;

        if(x==0) return x;
        int low=1,high=x;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid==x/mid){
                return mid;
            }
            else if(mid<x/mid){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};