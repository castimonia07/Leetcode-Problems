class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
        // int n=nums.size();
        // int maxcnt=0;
        // for(int i=0;i<n;i++){
        //     int cnt=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]%2==1){
        //             cnt++;
        //         }
        //         if(cnt==k){
        //             maxcnt++;
        //         }
        //         else if(cnt>k) break;
        //     }
        // }
        // return maxcnt;
    int atMost(vector<int>& nums,int k){
        int left=0,count=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]%2==1)k--;
            while(k<0){
                if(nums[left]%2==1) k++;
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
};