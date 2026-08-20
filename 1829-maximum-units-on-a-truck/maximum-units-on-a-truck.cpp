class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int> &a,const vector<int> &b){
            return a[1]>b[1];
        });
        int maxi=0;
        for(int i=0;i<boxTypes.size();i++){
            int a=boxTypes[i][0];
            if(a<=truckSize){
                maxi+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                if(truckSize>0) {
                    maxi+=truckSize*boxTypes[i][1];
                    truckSize=0;
                }
            }
        }
        return maxi;
        
    }
};