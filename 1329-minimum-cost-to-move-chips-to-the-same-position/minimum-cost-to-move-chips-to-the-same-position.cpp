class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int mincost=INT_MAX;
        for(int i=0;i<n;i++){
            int a=position[i];
            int j=0;
            int cost=0;
            while(j<n){
                if(abs(position[j]-a)%2==1){
                    cost+=1;
                }
                else if(abs(position[j]-a)%2==0){
                    cost+=0;
                }
                j++;
            }
            mincost=min(mincost,cost);
        }
        return mincost;
    }
};