class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle edge case for overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // Prevent overflow
        }
        return dividend / divisor; // Perform integer division
    }
};
