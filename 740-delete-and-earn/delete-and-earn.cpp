class Solution {
public:
    // int func(int i,vector<int> &sum){
    //     if(i==0) return sum[0];
    //     if(i<0) return 0;
    //     int pick=sum[i]+func(i-2,sum);
    //     int notpick=0+func(i-1,sum);
    //     return max(pick,notpick);
    // }
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        unordered_map<int,int> freq;
        for(auto num:nums){
            freq[num]++;
        }
        int maxval=INT_MIN;
        for(auto i :nums){
            maxval=max(maxval,i);
        }
        vector<int> sum(maxval+1,0);
        for(auto it:freq){
            sum[it.first]=(it.first)*(it.second);
        }
        // return func(maxval,sum);
        vector<int> dp(maxval+1,0); 
        dp[0]=0;
        dp[1]=sum[1];       
        for(int i=2;i<maxval+1;i++){
            int take=sum[i]+dp[i-2];
            int notake=0+dp[i-1];
            dp[i]=max(take,notake);
        }
        return dp[maxval];
    }
};