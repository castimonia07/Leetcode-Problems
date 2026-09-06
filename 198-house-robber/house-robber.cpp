class Solution {
public:
    int func(vector<int> &nums,int i,vector<int> &dp){
        if(i==0) return nums[0];
        if(i==1) return max(nums[0],nums[1]);
        if(dp[i]!=-1) return dp[i];
        int not_take=func(nums,i-1,dp);
        int take=INT_MIN;
        if(i>1) take=func(nums,i-2,dp)+nums[i];
        return dp[i]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return func(nums,n-1,dp);
    }
};