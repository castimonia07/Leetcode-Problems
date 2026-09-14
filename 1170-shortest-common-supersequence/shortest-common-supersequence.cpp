class Solution {
public:
    int func(string& str1, string& str2, int i, int j,
             vector<vector<int>>& dp) {
        if (i < 0 || j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        if (str1[i] == str2[j])
            return dp[i][j] = 1 + func(str1, str2, i - 1, j - 1, dp);
        else {
            return dp[i][j] = max(func(str1, str2, i - 1, j, dp),
                                  func(str1, str2, i, j - 1, dp));
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size(), m = str2.size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        func(str1, str2, n - 1, m - 1, dp);

        int i = n - 1, j = m - 1;
        string res = "";
        while (i >= 0 && j >= 0) {
            if (str1[i] == str2[j]) {
                res += str1[i];
                i--;
                j--;
            } else {
                if (i == 0) {
                    res += str2[j];
                    j--;
                } else if (j == 0) {
                    res += str1[i];
                    i--;
                } else if (dp[i - 1][j] > dp[i][j - 1]) {
                    res += str1[i];
                    i--;
                } else {
                    res += str2[j];
                    j--;
                }
            }
        }
        while (i >= 0) {
            res += str1[i];
            i--;
        }
        while (j >= 0) {
            res += str2[j];
            j--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};