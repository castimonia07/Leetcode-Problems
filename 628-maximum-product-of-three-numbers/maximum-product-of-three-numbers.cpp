class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int product=1;
        for(int i=n-1;i>=n-3;i--){
            product=product*nums[i];
        }
        return max(product,nums[0]*nums[1]*nums[n-1]);
    }
};