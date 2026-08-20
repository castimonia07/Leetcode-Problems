class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt=0;
        int j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i=0;i<g.size();i++){
            while(j<s.size()&&s[j]-g[i]<0){
                j++;
            }
            if(j==s.size()) break;
            if(g[i]<=s[j]) cnt++;
            j++;
        }
        return cnt;
    }
};