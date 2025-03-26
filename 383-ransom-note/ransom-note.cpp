class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        unordered_map<char,int> rn;
        for(char c:ransomNote){
            rn[c]++;
        }
        unordered_map<char,int> mag;
        for(char c: magazine){
            mag[c]++;
        }
        for(auto it:rn){
            char ch=it.first;
            int req=it.second;
            if(mag[ch]<req){
                return false;
            }
        }
        return true;


    }
};