class Solution {
public:
    int findNthDigit(int n) {
        int k=1;
        long cnt=9;
        while(n>k*cnt){
            n-=k*cnt;
            k++;
            cnt*=10;
        }
        int num=pow(10,k-1)+((n-1)/k);
        int dig=(n-1)%k;
        return to_string(num)[dig]-'0';
    }
};