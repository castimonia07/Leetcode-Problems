class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b){
            return a[1]<b[1];
        });
        int cnt=0;
        int prev=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(prev>intervals[i][0]){
                cnt++;
            }
            else {prev=intervals[i][1];}
        }
        return cnt;
    }
};