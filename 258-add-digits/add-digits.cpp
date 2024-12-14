class Solution {
public:
    int addDigits(int num) {
        int r=num;
        while(r>9){
            int m=ceil(r/10);
            int n=r%10;
            r=m+n;
        }
        return r;
    }
};