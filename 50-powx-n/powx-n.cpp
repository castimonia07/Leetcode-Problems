class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N==0){
            return 1;
        }
        double ans=1;
        // if(N<0){
        //     for(long long j=N;j<0;j++)
        //     ans=ans/x;
        // }
        // for(long long i=1;i<=N;i++){
        //     ans=ans*x;
        // }
        // return ans;

        // while(N>0){
        //     if(N>0){
        //         ans=ans*x;
        //     } 
        //     N=N-1;
        // }
        // while(N<0){
        //     if(N<0){
        //         ans=ans/x;
        //     } 
        //     N=N+1;
        // }
        // return ans;
        
    if(N<0){
        x=1/x;
        N=-N;
    }
    while(N>0){
        if(N%2==1){
            ans=ans*x;
        }
        x=x*x;
        N=N/2;
    }
    return ans;
    }


};