class Solution {
public:
    int func(int n,vector<int> &dp) {
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        int take=func(n-1,dp);
        int not_take=func(n-2,dp);
        return dp[n]=take+not_take;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return func(n,dp);
    }
};