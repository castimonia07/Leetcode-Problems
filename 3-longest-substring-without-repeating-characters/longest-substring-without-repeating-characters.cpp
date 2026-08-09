class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int maxlen=0;
        int left=0;
        for(int i=left;i<s.size();i++){
            mpp[s[i]]++;
            while(mpp[s[i]]>1){
                mpp[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};