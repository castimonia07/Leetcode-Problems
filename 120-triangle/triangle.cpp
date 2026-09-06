class Solution {
public:
    int func(vector<vector<int>>& triangle,int i,int j,int n,vector<vector<int>> &dp){
        if(i==n) return triangle[i][j];

        if(dp[i][j]!=-1) return dp[i][j];

        int down=func(triangle,i+1,j,n,dp);
        int dia=func(triangle,i+1,j+1,n,dp);

        return dp[i][j]=triangle[i][j]+min(down,dia);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        // return func(triangle,0,0,n-1,dp);

        for(int i=0;i<n;i++){
            dp[n-1][i]=triangle[n-1][i];
        }

        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int left=dp[i+1][j];
                int dia=dp[i+1][j+1];
                dp[i][j]=triangle[i][j]+min(left,dia);
            }
        }
        return dp[0][0];
    }
};