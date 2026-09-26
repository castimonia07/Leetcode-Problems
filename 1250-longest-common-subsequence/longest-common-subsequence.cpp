class Solution {
public:
    int func(string &text1,string &text2,int i,int j,vector<vector<int>> &dp){
        if(i==text1.size() || j==text2.size()) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        int not_take=0;
        int take=0;
        if(text1[i]==text2[j]){
            take=1+func(text1,text2,i+1,j+1,dp);
        }
        else{
            not_take=max(func(text1,text2,i,j+1,dp),func(text1,text2,i+1,j,dp));
        }
        return dp[i][j]=max(take,not_take);

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return func(text1,text2,0,0,dp);
    }
};