class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int size = fb.size();
        int cnt = 0;
        for (int i = 0; i < size; i++) {
            if (fb[i] == 0) {
                bool emptyleft = (i == 0) || (fb[i - 1] == 0);
                bool emptyright = (i == size - 1) || (fb[i + 1] == 0);
                if (emptyleft && emptyright) {
                    fb[i] = 1;
                    cnt++;
                }
            }
        }
        return (cnt >= n);

        // int cnt=0;
        // if(flowerbed.size()==1 && flowerbed[0]==0){
        //     cnt++;
        // }
        // else if(flowerbed[0]==0&&flowerbed[1]==0){
        //     cnt++;
        //     flowerbed[0]=1;
        // }
        // for(int i=1;i<flowerbed.size()-1;i++){
        //     if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0){
        //         cnt++;
        //         flowerbed[i]=1;
        //     }
        // }
        // int m=flowerbed.size();
        // if(flowerbed[m-1]==0&&flowerbed[m-2]==0){
        //     cnt++;
        // }
        // return cnt>=n;
    }
};