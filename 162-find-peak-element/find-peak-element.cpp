class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        else if(n==2){
            if(nums[0]>nums[1]){
                return 0;
            }
            else return 1;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(nums[i]>nums[i+1]&&nums[i]>nums[i-1]){
                    return i;
                }
                else{
                    if(nums[n-1]>nums[n-2]){
                        return n-1;
                    }
                }
            } 
        }  
        return 0;
    }
};