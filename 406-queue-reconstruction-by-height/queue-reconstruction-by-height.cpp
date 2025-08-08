class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),[](const vector<int>& a,const vector<int>& b){
            if(a[0]==b[0]) return a[1]<b[1];
            return a[0]>b[0];
        });
        vector<vector<int>> v;
        for(int i=0;i<people.size();i++){
            vector<int> ppl=people[i];
            v.insert(v.begin()+ppl[1],ppl);
        }
        return v;
        
    }
};