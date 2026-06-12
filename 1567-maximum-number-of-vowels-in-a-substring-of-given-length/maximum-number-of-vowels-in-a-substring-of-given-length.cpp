class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        string str="";
        int cnt=0;
        for(int i=0;i<k;i++){
            str+=s[i];
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cnt++;
            }
        }
        int max_v=cnt;
        for(int i=k;i<n;i++){
            str+=s[i]-s[i-k];
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                cnt++;
            }
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                cnt--;
            }
            max_v=max(max_v,cnt);
        }
        return max_v;
    }
};