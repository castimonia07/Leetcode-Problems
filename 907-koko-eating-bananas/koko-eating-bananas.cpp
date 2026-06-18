class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1,high=*max_element(piles.begin(),piles.end());
        long long result=high;

        while(low<=high){
            long long mid=low+(high-low)/2;

            long long hour=0;

            for(int pile:piles){
                if(pile%mid==0){
                    hour+=pile/mid;
                }
                else hour+=(pile/mid)+1;
            }
            if(hour<=h){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};