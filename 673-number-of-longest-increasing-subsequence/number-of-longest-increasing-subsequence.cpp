class Solution {
public:
    pair<int,int> func(vector<int> &nums,int i,int prev,vector<vector<pair<int,int>>> &dp){
        if(i==nums.size()) return {0,1};

        if(dp[i][prev+1].first!=-1) return dp[i][prev+1];
        pair<int,int> not_take=func(nums,i+1,prev,dp);

        pair<int,int> take={0,0};
        if(prev==-1||nums[i]>nums[prev]){
            take=func(nums,i+1,i,dp);
            take.first+=1;
        }
        if(take.first>not_take.first) return dp[i][prev+1]=take;
        else if(take.first<not_take.first) return dp[i][prev+1]=not_take;

        else{
            return dp[i][prev+1]={take.first,take.second+not_take.second};
        }
    }
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>>(n+1,{-1,-1}));
        auto a=func(nums,0,-1,dp);
        return a.second;
    }
};