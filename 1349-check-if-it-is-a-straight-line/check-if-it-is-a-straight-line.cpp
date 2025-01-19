class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();

        int x1= coordinates[0][0],y1=coordinates[0][1];
        int x2= coordinates[1][0],y2=coordinates[1][1];

        int dx=x2-x1,dy=y2-y1;
        for(int i=2;i<n;i++){
            int x= coordinates[i][0],y=coordinates[i][1];

            if((y-y1)*dx!=(x-x1)*dy){
                return false;
            }

        }
        return true;

    }
};