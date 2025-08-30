class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_area=0;
        double max_dia=0;
        for(auto p:dimensions){
            double dia=sqrt(p[0]*p[0]+p[1]*p[1]);
            // max_dia=max(max_dia,dia);
            int area=p[0]*p[1];
            if(dia>max_dia){
                max_dia=dia;
                max_area=area;
            }
            else if(max_dia==dia){
                max_area=max(max_area,area);
            }
        }
        return max_area;
    }
};