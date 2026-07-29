class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>vec(26,false);
        for(char c:sentence){
            vec[c-'a']=true;
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]==false) return false;
        }
        return true;
    }
};