class Solution {
public:
    int func(vector<int> &prices,int i,bool buy,vector<vector<int>> &dp){
        if(i==prices.size()) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy==1){
            return dp[i][buy]=max(func(prices,i+1,0,dp)-prices[i],func(prices,i+1,1,dp));
        }
        else{
            return dp[i][buy]=max(prices[i]+func(prices,i+1,1,dp),func(prices,i+1,0,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return func(prices,0,true,dp);
    }
};