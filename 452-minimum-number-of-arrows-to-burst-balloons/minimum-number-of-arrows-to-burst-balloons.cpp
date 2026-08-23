class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int cnt=1;
        sort(points.begin(),points.end(),[](const vector<int> &a,const vector<int> &b){
            if(a[0]==b[0]){
                return a[1]<b[1];
            }
            else return a[0]<b[0];
        });
        int prev=points[0][1];
        // int mini=INT_MAX;
        for(int i=0;i<points.size()-1;i++){
            if(prev>=points[i+1][0]){
                prev=min(prev,points[i+1][1]);
                continue;
            }
            else{
                cnt++;
                prev=points[i+1][1];
                // mini=prev;
            }
        }
        return cnt;
    }
};