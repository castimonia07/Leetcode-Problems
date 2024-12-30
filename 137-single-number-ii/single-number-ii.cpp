class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        for(auto& pair:m){
            if(pair.second==1){
                return pair.first;
            }
        }
        return -1;
    }
};