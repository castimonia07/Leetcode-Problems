class Solution {
public:
    // vector<vector<int>> merge(vector<vector<int>> new1){
    //     vector<vector<int>> res;
    //     int n=new1.size();
    //     int start=new1[0][0];
    //     int prev=new1[0][1];
    //     for(int i=1;i<n;i++){
    //         vector<int> a;
    //         if(prev>=new1[i][0]){
    //             prev=max(prev,new1[i][1]);
    //         }
    //         else{
    //             a.push_back(start);
    //             a.push_back(prev);
    //             res.push_back(a);
    //             start=new1[i][0];
    //             prev=new1[i][1];
    //         }
    //     }
    //     prev=max(prev,new1[n-1][1]);
    //     vector<int> a={start,prev};
    //     res.push_back(a);
    //     return res;
    // }

    vector<vector<int>> merge(vector<vector<int>> intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> &a ,vector<int> &b){
            return a[0]<b[0];
        });
        vector<vector<int>> vec;
        int prev=intervals[0][1];
        int strt=intervals[0][0];
        int n=intervals.size();
        for(int i=1;i<intervals.size();i++){
            vector<int> a;
            if(prev>=intervals[i][0]){
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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // int n=intervals.size();
        // vector<vector<int>> new1;
        // if(n==0){
        //     new1.push_back(newInterval);
        //     return new1;
        // }
        // for(int i=0;i<n;i++){
        //     if(intervals[i][0]>newInterval[0]){
        //         new1.push_back(newInterval);
        //         new1.push_back(intervals[i]);
        //     }
        //     else{
        //         new1.push_back(intervals[i]);
        //     }
        // }
        intervals.push_back(newInterval);
        // return new1;
        return merge(intervals);
    }
};