class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // int x;
        // for(int i=0;i<n;i++){
        //     int low=i;
        //     int cnt=0;
        //     x=nums[i];
        //     while(low<n){
        //         if(nums[low]==x){
        //             cnt++;
        //         }
        //         low++;
        //     }
        //     if(cnt>1){
        //         break;
        //     }
        // }
        // return x;
        int n=nums.size();
        int low=1,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int cnt=0;
            for(int num:nums){
                if(num<=mid){
                    cnt++;
                }
            }
            if(cnt>mid){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};