class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int i = 1;
        while (i < n && nums[i] == nums[i - 1]) {
            i++;
        }

        if (i == n) return 1;

        int val = (nums[i] > nums[i - 1]) ? -1 : 1;
        int count = 2;  // includes nums[i-1] and nums[i]

        for (; i < n - 1; i++) {
            int diff = nums[i + 1] - nums[i];

            if (diff == 0) continue;

            if ((diff > 0 && val == 1) || (diff < 0 && val == -1)) {
                val *= -1;
                count++;
            }
        }

        return count;
    }
};
