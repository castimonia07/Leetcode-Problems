class Solution {
public:
    void sortColors(vector<int>& nums) {
        //  int n=nums.size();
        //  int low=0,high=n-1 ,a=n-1;
        //  while(low<=high){
        //     if(nums[low]>nums[a]){
        //         swap(nums[low],nums[a]);
        //         low++;
        //     }
        //     else if(nums[low]>nums[high]){
        //         swap(nums[low],nums[high]);
        //         low++;
        //         high--;
        //     }
        //     else {
        //         low++;
        //     }
        //  }
        sort(nums.begin(),nums.end());
         
    }
};