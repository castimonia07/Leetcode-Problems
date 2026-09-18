class Solution {
public:
    bool ispre(string &a,string &b){
        if(a.size()!=b.size()+1) return false;

        int i=0,j=0,diff=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                diff++;
                i++;
            }
        }
        if(diff>1) return false;
        return true;
    }
    int func(vector<string> &words,int i,int prev,vector<vector<int>> &dp){
        if(i==words.size()) return 0;

        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int not_take=func(words,i+1,prev,dp);

        int take=-1;

        if(prev==-1||ispre(words[i],words[prev])){
            take=1+func(words,i+1,i,dp);
        }
        return dp[i][prev+1]=max(take,not_take);
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),[](string &s1,string&s2){
            return s1.size()<s2.size();
        });
        int n=words.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return func(words,0,-1,dp);
    }
};