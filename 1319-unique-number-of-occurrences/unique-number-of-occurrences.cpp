class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int nums: arr){
            m[nums]++;
        }
        for(auto& it:m){
            v.push_back(it.second);
        }
        unordered_map<int,int> m1;
        for(int num: v){
            m1[num]++;
        }
        for(auto& it:m1){
            if(it.second>1){
                return false;
            }
        }
        return true;
    }
};