class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<n;j++){
                int sqr=j*j+i*i;
                int c=(int)sqrt(sqr);
                if(c<=n && c*c==sqr){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};