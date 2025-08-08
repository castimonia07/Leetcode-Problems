class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // int cnt=0,cnt1=0,cnt2=0;
        // int mid=n/2;
        // for(int i=0;i<n;i++){
        //     cnt+=abs(nums[mid]-nums[i]);
        // }
        // return cnt;
        long long res=INT_MAX;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=0;j<n;j++){
                sum+=abs(nums[i]-nums[j]);
            }
            res=min(res,sum);
        }
        return res;
    }
};