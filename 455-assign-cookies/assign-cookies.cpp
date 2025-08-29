class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,cnt=0;
        while(j<s.size() && i<g.size()){
            if(s[j]>=g[i]){
                cnt++;
                i++;
                j++;
            }
            else j++;
        }
        return cnt;

    }
};