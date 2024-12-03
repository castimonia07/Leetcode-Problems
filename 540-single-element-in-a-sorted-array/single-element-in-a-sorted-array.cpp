class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int cnt=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             cnt++;
        //         }
        //     }
        //     if(cnt==1){
        //         return nums[i];
        //         }
        // }
        // return -1;

        int n=nums.size();
        unordered_map<int,int> freq;

        for(int num:nums){
            freq[num]++;
        }

        for(auto pair:freq){
            if(pair.second==1){
                return pair.first;

            }
        }
        return -1;
    }
};