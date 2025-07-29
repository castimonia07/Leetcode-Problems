class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int size=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                size++;
            }
            if(size%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};