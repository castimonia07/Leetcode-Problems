class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int w:weights){
            sum+=w;
        }
        int res;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int s=0,d=1;
            for(int w:weights){
                if(mid-s>=w){
                    s+=w;
                }
                else{
                    d++;
                    s=w;
                }
            }
            if(d<=days){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return res;
    }
};