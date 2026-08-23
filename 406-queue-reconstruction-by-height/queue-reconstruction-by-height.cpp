class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),[](const vector<int> &a,const vector<int> &b){
            if(a[0]==b[0]) return a[1]<b[1];
            else return a[0]>b[0];
        });

        vector<vector<int>> ans;
        for(int i=0;i<people.size();i++){
            vector<int> temp=people[i];
            ans.insert(ans.begin()+temp[1],temp);
        }
        return ans;
        
    }
};