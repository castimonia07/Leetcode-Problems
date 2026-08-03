class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // vector<int> lower(26,0);
        vector<int> hash(256,0);
        int left=0;
        int maxlen=0;
        for(int right=left;right<s.size();right++){
            // lower[s[right]-'a']++;
            hash[s[right]]++;
            while(hash[s[right]]>1){
                // lower[s[left]-'a']--;
                hash[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,(right-left)+1);
        }
        return maxlen;
    }
};