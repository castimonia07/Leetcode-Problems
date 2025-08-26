class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_dia=0,max_area=0;
        for(auto p:dimensions){
            double dia=sqrt(p[0]*p[0]+p[1]*p[1]);
            double area=p[0]*p[1];
            if(max_dia<dia){
                max_dia=dia;
                max_area=area;
            }
            else if(max_dia==dia){
                max_area=max(area,max_area);
            }
        }
        return max_area;
    }
};