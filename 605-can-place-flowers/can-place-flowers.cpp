class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1 && flowerbed[0]==0) return n<=1;
        if(flowerbed[0]==0 && flowerbed[1]==0 && n>0) {
            n--;
            flowerbed[0]=1;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(n>0 && flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                n--;
                flowerbed[i]=1;
            }
            if(n==0){
                return true; 
                break;
            }
        }
        if(n>0){
            if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0)
                {n--;
                flowerbed[flowerbed.size()-1]=1;
                }
        }
        
        return n==0;

        
    }
};