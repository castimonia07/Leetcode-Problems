class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0,cnt=0;
        while(l<n&&r<m){
            if(g[l]<=s[r]){
                cnt++;
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return cnt;
    }
};