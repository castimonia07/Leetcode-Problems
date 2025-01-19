class Solution {
public:
    int findMin(vector<int>& nums) {
        int a=INT_MAX;
        for(int i=0;i<nums.size();i++){
            a=min(a,nums[i]);
        }
        return a;
    }
};