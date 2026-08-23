class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cnt=0;
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a,const vector<int> &b){
            if(a[1]==b[1]){
                return a[0]<b[0];
            }
            else return a[1]<b[1];
        });
        int n=intervals.size();
        int i=0;
        int prev=intervals[0][1];

        while(i<n-1){
            if(prev>intervals[i+1][0]) {
                cnt++;
                // i+=2;
            }
            else {
                // i++;
                prev=intervals[i+1][1];
            }
            i++;
        }
        return cnt;
    }
};