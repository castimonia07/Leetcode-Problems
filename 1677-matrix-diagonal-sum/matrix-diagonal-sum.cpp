class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int dia=0;
        int j=n-1;
        for(int i=0;i<n;i++){
            dia+=mat[i][i];
            if(j>=0 && j!=i){
                dia+=mat[i][j];
            }
            j--;
        }
        return dia;
    }
};