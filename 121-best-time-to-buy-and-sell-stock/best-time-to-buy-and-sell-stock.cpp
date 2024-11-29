class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int prof=0;
        int m=INT_MAX;
        for(int i=0;i<n;i++){
            m=min(m,prices[i]);
            prof=max(prof,prices[i]-m);
        }
        return prof;

    }
};