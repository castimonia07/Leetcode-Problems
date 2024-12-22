class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 || n==2) return true;
        long long x=2;
        while(x<=n){
            x=x*2;
            if(x==n){
                return true;
            }
        }
        return false;
    }
};