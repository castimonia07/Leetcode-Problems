class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // for(int i=0;i<=nums.size()-1;i++){
        //     int j=i;
        //     while(j>0 && nums[j-1]>nums[j]){
        //         swap(nums[j-1],nums[j]);
        //         j--;
        //     }
        // }
        // return nums;

        sort(nums.begin(),nums.end());
        return nums;
    }
};