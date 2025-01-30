class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(long long)m*k) return -1;
        int left=*min_element(bloomDay.begin(),bloomDay.end());
        int right=*max_element(bloomDay.begin(),bloomDay.end());

        while(left<=right){
            int mid=left+(right-left)/2;
            int b=0,f=0;

            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid){
                    f++;
                    if(f==k){
                        b++;
                        f=0;
                    }
                }
                else{
                    f=0;
                }
            }
            if(b>=m){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};