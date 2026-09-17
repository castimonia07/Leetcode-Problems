class Solution {
public:
    int func(vector<int> &nums,int i,int prev,vector<vector<int>> &dp){
        if(i==nums.size()) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int not_take=func(nums,i+1,prev,dp);
        int take=-1;
        if(prev==-1 ||nums[i]%nums[prev]==0){
            take=1+func(nums,i+1,i,dp);
        }
        return dp[i][prev+1]=max(take,not_take);

    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        func(nums,0,-1,dp);
        vector<int> ans;
        int i=0,prev=-1;
        while(i<n){
            int not_take=func(nums,i+1,prev,dp);
            int take=-1;
            if(prev==-1||nums[i]%nums[prev]==0){
                take=1+func(nums,i+1,i,dp);
            }
            if(take>=not_take){
                ans.push_back(nums[i]);
                prev=i;
            }
            i++;
        }
        return ans;
    }
};