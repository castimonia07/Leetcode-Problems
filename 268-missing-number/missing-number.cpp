class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int N=nums.size();
        // vector<int> hash(N + 1, 0);

        // for(int i=0;i<N;i++){
        //     hash[nums[i]]=1;
        // }
        // for(int i=0;i<=N;i++){
        //     if(hash[i]==0){
        //         return i;
        //     }
        // }
        // return -1;

        int n=nums.size();
        int sum=(n*(n+1))/2;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2+=nums[i];
        }
        if(sum!=sum2){
            return sum-sum2;
        }
        if(nums[0]!=0){
            return 0;
        }
        return -1;

    }
};