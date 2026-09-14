class Solution {
public:
    int func(string &s,int i,int j,vector<vector<int>> &dp){
        if(i>j) return 0;
        if(i==j) return dp[i][j]=1;
        if(dp[i][j]!=-1) return dp[i][j];

        if(s[i]==s[j]) return dp[i][j]=2+func(s,i+1,j-1,dp);

        else{
            return dp[i][j]=max(func(s,i+1,j,dp),func(s,i,j-1,dp));
        }
    }
    int minInsertions(string s) {
        int n=0,m=s.size();
        vector<vector<int>> dp(m,vector<int>(m,-1));
        return m-func(s,n,m-1,dp);
    }
};