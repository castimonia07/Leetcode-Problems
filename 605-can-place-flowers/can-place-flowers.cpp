class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        // int size = fb.size();
        // int cnt = 0;
        // for (int i = 0; i < size; i++) {
        //     if (fb[i] == 0) {
        //         bool emptyleft = (i == 0) || (fb[i - 1] == 0);
        //         bool emptyright = (i == size - 1) || (fb[i + 1] == 0);
        //         if (emptyleft && emptyright) {
        //             fb[i] = 1;
        //             cnt++;
        //         }
        //     }
        // }
        // return (cnt >= n);

        if(n==0) return true;
        if(fb.size()==1 && fb[0]==0){
            if(n<=1){
                return true;
            }
            else return false;
        }
        int cnt=0;
        if(fb[0]==0 && fb[1]==0){
            cnt++;
            fb[0]=1;
        }
        for(int i=1;i<fb.size()-1;i++){
            if(fb[i-1]==0&&fb[i]==0&&fb[i+1]==0){
                cnt++;
                fb[i]=1;
            }
        }
        int m=fb.size();
        if(fb[m-1]==0&&fb[m-2]==0){
            cnt++;
        }
        return cnt>=n;
    }
};