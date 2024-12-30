class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        int cnt=1;
        for(int num:nums){
            s.insert(num);
            if(s.size()>3){
                s.erase(s.begin());
            }
        }
        if(s.size()<3){
            return *s.rbegin();
        }
        return *s.begin();
       

    }
};