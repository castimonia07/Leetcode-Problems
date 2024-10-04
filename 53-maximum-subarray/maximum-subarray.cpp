class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_num=INT_MIN;
        int a=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            a+=nums[i];
            max_num=max(max_num,a);
            if(a<0){
                a=0;
            }
        }
        return max_num;

        
    }
};