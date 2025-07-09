class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0;
        int maxlen=0;
        int maxcnt=0;
        for(int right=0;right<s.size();right++){
            freq[s[right] - 'A']++;
            maxcnt=max(maxcnt,freq[s[right]-'A']);
            if((right-left+1)-maxcnt>k){
                freq[s[left]-'A']--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};