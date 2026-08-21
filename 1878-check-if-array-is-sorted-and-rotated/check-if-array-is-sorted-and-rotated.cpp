class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int indx=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                // indx=i;
                // break;
                cnt++;
            }
        }
        // int cnt=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==nums[(i+indx)%n]){
        //         cnt++;
        //     }
        // }
        return cnt<=1;
    }
};