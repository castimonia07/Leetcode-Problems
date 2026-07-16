class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxi=0;
        for(char c:s){
            if(c=='('){
                cnt++;
                maxi=max(maxi,cnt);
            }
            if(c==')') cnt--;
        }
        return maxi;
    }
};