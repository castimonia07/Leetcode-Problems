class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int m=matrix.size();
        // int n=matrix[0].size();
        // vector<int> v1(m,0);
        // vector<int>v2(n,0);
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             v1[i]=1;
        //             v2[j]=1;
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(v2[i]==1){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        // for(int j=0;j<m;j++){
        //     for(int i=0;i<n;i++){
        //         if(v1[j]==1){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        // return matrix;

        set<int> row;
        set<int> column;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(auto st:column){
                matrix[i][st]=0;
            }
        }
        for(int i=0;i<matrix[0].size();i++){
            for(auto st:row){
                matrix[st][i]=0;
            }
        }
        // return matrix;
    }
};