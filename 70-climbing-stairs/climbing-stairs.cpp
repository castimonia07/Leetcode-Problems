class Solution {
public:
    // int climb(int i ,vector<int> &dp) {
    //     if(i==0 || i==1) return 1;
    //     if(dp[i]!=-1) return dp[i];
    //     int left=climb(i-1,dp);
    //     int right=climb(i-2,dp);
    //     return dp[i]=left+right;
    // }
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        // return climb(n,dp);
        dp[1]=1,dp[0]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];

    }
};