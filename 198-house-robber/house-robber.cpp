class Solution {
public:
// int func(vector<int>& nums,int i,vector<int> &dp){
//     if(i==0) return nums[i];
//     if(i<0) return 0;
//     if(dp[i]!=-1)return dp[i];
//     int pick=nums[i]+func(nums,i-2,dp);
//     int notpick=0+func(nums,i-1,dp);
//     return dp[i]=max(pick,notpick);
// }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int> dp(n,-1);
        // return func(nums,n-1,dp);
        // if(n==1) return nums[0];
        // vector<int> dp(n,0);
        // dp[0]=nums[0];
        // dp[1]=max(nums[0],nums[1]);
        // for(int i=2;i<n;i++){
        //     int pick=nums[i]+dp[i-2];
        //     int notpick=0+dp[i-1];
        //     dp[i]=max(0+dp[i-1],nums[i]+dp[i-2]);
        // }
        // return dp[n-1];

        if(n==1) return nums[0];
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=prev2;
            int nottake=0+prev;
            int cur=max(take,nottake);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};