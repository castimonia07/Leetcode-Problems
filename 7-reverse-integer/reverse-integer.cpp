class Solution {
public:
    int reverse(int x) {
        int n=0;
        int last;
        while(x!=0){
            last=(x%10);
            if(n>INT_MAX/10 ) return 0;
            if(n<INT_MIN/10 ) return 0;
            n=n*10+last;
            x=x/10;
        }
        return n;
    }
};