class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // int high=n-1,low=0;
        // while(low<n){
        //     int mid=(high+low)/2;
        //     float sum=0.0;
        //     for(int i=0;i<n;i++){
        //         sum+=ceil(nums[i]/nums[mid]);
        //     }
        //     if(sum>threshold){
        //         low++;
        //     }
        //     else{
        //         return nums[mid];
        //     }
        // }
        // return -1;

        int n=nums.size();
        int low=1,high=*max_element(nums.begin(),nums.end());
        int result=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long sum=0;
            for(int num:nums){
                sum+=(num+mid-1)/mid;
            }
            if(sum<=threshold){
                result= mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return result;
    }
};