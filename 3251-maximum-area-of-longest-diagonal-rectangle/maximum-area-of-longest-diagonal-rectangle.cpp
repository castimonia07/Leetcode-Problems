class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_dia=0;
        double max_area=0;
        for(auto d: dimensions){
            double dia=sqrt(d[0]*d[0]+d[1]*d[1]);
            double area=d[0]*d[1];
            if(max_dia<dia){
                max_dia=dia;
                max_area=area;
            }
            else if(dia==max_dia){
                max_area=max(max_area,area);
            }
        }
        return max_area;
    }
};