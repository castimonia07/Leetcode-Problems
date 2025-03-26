class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        unordered_map<char,int> mag;
        for(char c:magazine){
            mag[c]++;
        }
        // unordered_map<char,int> mag;
        // for(char c: magazine){
        //     mag[c]++;
        // }
        // for(auto it:rn){
        //     char ch=it.first;
        //     int req=it.second;
        //     if(mag[ch]<req){
        //         return false;
        //     }
        // }
        // return true;
        for(char ch:ransomNote){
            if(mag[ch]>0){
                mag[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};