class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> cnt;
        for(char c:s){
            cnt[c]++;
        }
        for(char c:t){
            cnt[c]--;
            if(cnt[c]<0){
                return c;
            }
        }
        return '\0';
    }
};