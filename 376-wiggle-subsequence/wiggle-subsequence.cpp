class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        vector<int> v;
        v.push_back(nums[0]);
        int val = 0;
        int i = 1;
        
        // Fix: Find the first non-zero difference
        while(i < nums.size() && nums[i] == nums[i-1]){
            i++;
        }
        if(i == nums.size()){
            return 1; // all elements are equal
        }

        // set initial val (direction)
        val = (nums[i] > nums[i-1]) ? -1 : 1;
        v.push_back(nums[i-1]);

        while(i < nums.size()){
            if(nums[i-1] - nums[i] > 0 && val == 1){
                i++;
                continue;
            }
            else if(nums[i-1] - nums[i] < 0 && val == -1){
                i++;
                continue;
            }
            else if(nums[i-1] - nums[i] == 0){
                i++;
                continue;
            }
            else if(nums[i-1] - nums[i] > 0 && val == -1){
                val = 1;
                v.push_back(nums[i-1]);
            }
            else if(nums[i-1] - nums[i] < 0 && val == 1){
                val = -1;
                v.push_back(nums[i-1]);
            }
            i++;
        }
        return v.size() ;
    }
};
