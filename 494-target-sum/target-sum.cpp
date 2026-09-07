class Solution {
public: 
    int func(vector<int> &nums,int target,int i,vector<vector<int>> &dp){
        if(i==0){
            if(target==0 && nums[0]==0) return 2;
            if(target==0 || target==nums[0]) return 1;
            return 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];

        int not_take=func(nums,target,i-1,dp);
        int take=0;
        if(target>=nums[i]) take=func(nums,target-nums[i],i-1,dp);

        return dp[i][target]=take+not_take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int tot=0;
        for(int num:nums){
            tot+=num;
        }
        if((tot+target)%2!=0 || tot+target<0) return 0;

        vector<vector<int>> dp(n,vector<int>((tot+target)/2+1,-1));
        return func(nums,(tot+target)/2,n-1,dp);
    }
};