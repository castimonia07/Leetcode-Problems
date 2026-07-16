class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string s1=s+s;
        return s1.find(goal)!=string::npos;
    }
};