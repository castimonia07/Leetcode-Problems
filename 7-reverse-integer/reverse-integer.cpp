class Solution {
public:
    int reverse(int x) {
        int last_d;
        int rev=0;
        while(x!=0){
            last_d=x%10;
            x=x/10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && last_d > 7)) {
                return 0;  // Overflow for positive numbers
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && last_d < -8)) {
                return 0;  // Overflow for negative numbers
            }
            rev=(rev*10)+last_d;
        }
        return rev;
    }
};