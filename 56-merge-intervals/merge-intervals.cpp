class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> &a ,vector<int> &b){
            // if(a[1]==b[1]){
            //     return a[0]<b[0];
            // }
            return a[0]<b[0];
        });
        vector<vector<int>> vec;
        int prev=intervals[0][1];
        int strt=intervals[0][0];
        int n=intervals.size();
        for(int i=1;i<intervals.size();i++){
            vector<int> a;
            if(prev>=intervals[i][0]){
                // strt=min(strt,intervals[i][0]);
                prev=max(prev,intervals[i][1]);
            }
            else{
                a.push_back(strt);
                a.push_back(prev);
                vec.push_back(a);
                strt=intervals[i][0];
                prev=intervals[i][1];
            }
        }
        prev=max(prev,intervals[n-1][1]);
        vector<int> a={strt,prev};
        vec.push_back(a);
        return vec;
    }
};