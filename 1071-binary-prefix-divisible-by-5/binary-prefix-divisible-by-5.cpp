class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> arr;
        int mod=0;
        for(int i=0;i<nums.size();i++){
            mod=(mod*2+nums[i]) % 5;
            if(mod==0) arr.push_back(true);
            else arr.push_back(false);
        }
        return arr;
    }
};