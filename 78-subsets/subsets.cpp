class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        int ts= 1 << n;
        for(int j=0;j<ts;++j){
            vector<int> s;
            for(int i=0;i<n;++i){
                if(j & (1 << i)){
                    s.push_back(nums[i]);
                }
            }
            result.push_back(s);
        }
        return result;
    }
};