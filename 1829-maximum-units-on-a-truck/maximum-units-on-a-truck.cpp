class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),
        [](const vector<int>& a,const vector<int>& b){
            return a[1]>b[1];
        });
        int totalunits=0;
        for(auto& box: boxTypes){
            int count=min(box[0],truckSize);
            totalunits+=count*box[1];
            truckSize-=count;

            if(truckSize==0) break;
        }
        return totalunits;
    }
};