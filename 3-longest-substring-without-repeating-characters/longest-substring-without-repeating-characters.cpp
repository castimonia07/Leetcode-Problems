class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n=s.length();
        // int max_len=0;
        // for(int i=0;i<n;i++){
        //     unordered_set<char> seen;
        //     for(int j=i;j<n;j++){
        //         if(seen.count(s[j])) break;
        //         seen.insert(s[j]);
        //         max_len=max(max_len,j-i+1);
        //     }

        // }
        // return max_len;

        // int maxlen=0;
        // int n=s.size();
        // for(int i=0;i<n;i++){
        //     int hash[250]={0};
        //     for(int j=i;j<n;j++){
        //         if(hash[s[j]]==1) break;
        //         int len=j-i+1;
        //         maxlen=max(maxlen,len);
        //         hash[s[j]]=1;
        //     }
        // }
        // return maxlen;

        vector<int> mpp(255,-1);
        int n=s.size();
        int l=0,r=0,maxlen=0;
        while(r<n){
            if(mpp[s[r]]!=-1){
                if(mpp[s[r]]>=l){
                    l=max(mpp[s[r]]+1,l);
                }
            }
            int len=r-l+1;
            maxlen=max(len,maxlen);
            mpp[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};