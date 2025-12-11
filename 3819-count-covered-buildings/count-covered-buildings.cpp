// class Solution {
// public:
//     int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
//         int n=buildings.size();
//         if(n<5) return 0;
//         map<pair<int,int>,int> freq;
//         for(auto &b:buildings){
//             int x=b[0];
//             int y=b[1];
//             freq[{x,y}]++;
//         }

//         for(auto &it:freq){
//             int x=it.first.first;
//             int y=it.first.second;
//             int cnt=it.second;
//         }
        
//     }
// };
class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        // find min and max for each row and column
        vector<int> minXforY(n + 1, -1);
        vector<int> maxXforY(n + 1, -1);
        vector<int> minYforX(n + 1, -1);
        vector<int> maxYforX(n + 1, -1);

        for (auto &v : buildings) {
            int r = v[0];   // x-coordinate
            int c = v[1];   // y-coordinate

            // update min and max X for each row (same y)
            minXforY[c] = (minXforY[c] == -1) ? r : min(r, minXforY[c]);
            maxXforY[c] = (maxXforY[c] == -1) ? r : max(r, maxXforY[c]);

            // update min and max Y for each column (same x)
            minYforX[r] = (minYforX[r] == -1) ? c : min(c, minYforX[r]);
            maxYforX[r] = (maxYforX[r] == -1) ? c : max(c, maxYforX[r]);
        }

        // final answer calculation
        int ans = 0;
        for (auto &v : buildings) {
            int r = v[0];
            int c = v[1];

            // must have left < r < right aagya mai
            // must have down < c < up
            if (minXforY[c] < r && maxXforY[c] > r &&
                minYforX[r] < c && maxYforX[r] > c)
                ans++;
        }

        return ans;
    }
};
