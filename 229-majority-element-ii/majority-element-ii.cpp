class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> occ;
        int n=nums.size();
        vector<int>v;
        for(int i:nums){
            occ[i]++;
        }
        for(auto num: occ){
            if(num.second>(n/3)){
                v.push_back(num.first);
            }
        }
        return v;
    }
};