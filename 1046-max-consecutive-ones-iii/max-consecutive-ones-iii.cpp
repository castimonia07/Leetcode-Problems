class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int maxlen=0;
        // for(int i=0;i<nums.size();i++){
        //     int zeroes=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==0){
        //             zeroes++;
        //         }
        //         if(zeroes<=k){
        //             int len=j-i+1;
        //             maxlen=max(maxlen,len);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return maxlen;

        // int maxlen=0,left=0,right=0,zeroes=0;
        // while(right<nums.size()){
        //     if(nums[right] == 0){
        //         ++zeroes;
        //     }
        //     while(zeroes>k){
        //         if(nums[left]==0){
        //             --zeroes;
        //         }
        //         ++left;;
        //     }
        //     if(zeroes<=k){
        //         int len=right-left+1;
        //         maxlen=max(maxlen,len);
        //     }
        //     ++right;
        // }
        // return maxlen;
        int maxlen=0,l=0,r=0,z=0;
        while(r<nums.size()){
            if(nums[r]==0) ++z;
            if(z>k){
                if(nums[l]==0){
                    --z;
                }
                ++l;
            }
            if(z<=k){
                 maxlen=max(maxlen,r-l+1);
            }
            ++r;
        }
        return maxlen;
    }
};