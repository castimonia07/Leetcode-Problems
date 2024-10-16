class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        // vector<int> hash;
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                return i;
            }
        }
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        int m=nums.size();
        for(int i=0;i<m;i++){
            if(target==nums[i]){
                return i;
            }
        }
        return 0;
    }
};