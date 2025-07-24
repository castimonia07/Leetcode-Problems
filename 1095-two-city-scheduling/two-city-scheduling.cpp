class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size()/2;
        sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[1] - a[0]) < (b[1] - b[0]);
        });
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=costs[i][1];
        }
        for(int i=n;i<2*n;i++){
            sum+=costs[i][0];
        }
        return sum;
    }
};