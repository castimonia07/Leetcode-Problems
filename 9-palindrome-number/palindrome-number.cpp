class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int last;
        if(x<0) return false;
        long long n=0;
        while(y!=0){
            last=y%10;
            if(n<INT_MIN/10) return false;
            if(n>INT_MAX/10) return false;
            n=n*10+(last);
            y/=10;
        }
        int ans=x^n;
        if(ans==0) return true;;
        return false;
    }
};