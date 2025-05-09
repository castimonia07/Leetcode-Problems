class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // BRUTE FORCE
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count == 1) {
                return nums[i];
            }
        }
        return -1; // just in case, though the problem guarantees a single element exists
    }
    // TC=O(n^2)  SC=O(1)


    //BETTER SOLUTION

    //     int singleNumber(vector<int>& nums) {
    //     unordered_map<int, int> freq;
    //     for (int num : nums) {
    //         freq[num]++;
    //     }
    //     for (auto it : freq) {
    //         if (it.second == 1) {
    //             return it.first;
    //         }
    //     }

    //     return -1; // fallback (shouldn't happen per problem constraints)
    // }
    // // TC=O(n)  SC=O(n) 


    //OPTIMAL SOLUTION
    //     int n=nums.size();
    //     if(n==1){
    //         return nums[0];
    //     }
    //     int single=0;
    //     for(int i=0;i<n;i++){
    //         single=single^nums[i];  // bitwise operator XOR
    //     }
    //     return single;
    // }

    // // TC=O(n)  SC=O(1)
};