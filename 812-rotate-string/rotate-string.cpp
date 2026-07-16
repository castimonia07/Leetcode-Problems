class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        // string s1=s+s;
        // return s1.find(goal)!=string::npos;
        for(int i=0;i<s.size();i++){
            string str=s.substr(i)+s.substr(0,i);
            if(str==goal){
                return true;
                break;
            }
        }
        return false;
    }
};