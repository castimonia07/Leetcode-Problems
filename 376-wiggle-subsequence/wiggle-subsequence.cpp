class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();

        vector<int> v;
        v.push_back(nums[0]);
        int i = 1;

        // Skip initial same elements
        while(i < nums.size() && nums[i] == nums[i-1]) i++;

        if(i == nums.size()) return 1; // All elements are the same

        int val = (nums[i] > nums[i-1]) ? -1 : 1; // Next we want opposite sign

        v.push_back(nums[i-1]); // push first turning point

        for(; i < nums.size(); i++) {
            if(nums[i] > nums[i-1] && val == -1) {
                v.push_back(nums[i-1]);
                val = 1;
            }
            else if(nums[i] < nums[i-1] && val == 1) {
                v.push_back(nums[i-1]);
                val = -1;
            }
        }

        // Add last element always as it's part of final wave
        v.push_back(nums.back());
        return v.size()-2;
    }
};
