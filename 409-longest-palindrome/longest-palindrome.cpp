class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int> upper(26,0);
        for(char c:s){
            if(c>='a'){
                lower[c-'a']++;
            }
            else upper[c-'A']++;
        }
        int cnt=0;
        bool isodd=false;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0) cnt+=lower[i];
            else {
                cnt+=lower[i]-1;
                isodd=true;
            }
            if(upper[i]%2==0) cnt+=upper[i];
            else {
                cnt+=upper[i]-1;
                isodd=true;
            }
        }
        if(isodd) return cnt+1;
        return cnt;
    }
};