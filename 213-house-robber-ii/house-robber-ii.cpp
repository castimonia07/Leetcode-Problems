class Solution {
public:
    int func(vector<int>& nums,int ind,vector<int> &dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if (dp[ind] != -1) return dp[ind];

        int take=nums[ind]+func(nums,ind-2,dp);
        int notake=0+func(nums,ind-1,dp);
        return dp[ind]=max(take,notake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> v1(nums.begin()+1,nums.end());
        vector<int> dp1(v1.size(),-1);
        int case1=func(v1,v1.size()-1,dp1);

        vector<int> v2(nums.begin(),nums.end()-1);
        vector<int> dp2(v2.size(),-1);
        int case2=func(v2,v2.size()-1,dp2);
        return max(case1,case2);
        
    }
};