class Solution {
public:
    int func(vector<int> &arr,int i,vector<int> &dp){
        if(i==0) return arr[i];
        if(i==1) return max(arr[0],arr[1]);

        if(dp[i]!=-1) return dp[i];
        int not_take=func(arr,i-1,dp);
        int take=INT_MIN;
        if(i>1) take=arr[i]+func(arr,i-2,dp);
        return dp[i]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n-1,-1),dp2(n-1,-1);
        vector<int> arr1;
        for(int i=0;i<n-1;i++){
            arr1.push_back(nums[i]);
        }
        vector<int> arr2;
        for(int i=1;i<n;i++){
            arr2.push_back(nums[i]);
        }

        return max(func(arr1,n-2,dp1),func(arr2,n-2,dp2));
    }
};