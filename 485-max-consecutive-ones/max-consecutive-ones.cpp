class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int curr=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                curr++;
                cnt=max(cnt,curr);
            }
            else{
                curr=0;
            }
        }
        return cnt;
    }
};