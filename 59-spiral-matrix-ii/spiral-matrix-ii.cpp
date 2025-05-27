class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0,bottom=n-1;
        int left=0,right=n-1;
        int a=0;
        vector<vector<int>>v(n,vector<int>(n));
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                a+=1;
                v[top][i]=a;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                a+=1;
                v[i][right]=a;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    a+=1;
                    v[bottom][i]=a;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    a+=1;
                    v[i][left]=a;
                }
                left++;
            }
        }
        return v;
    }
};