class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump=0;
        for(int i=0;i<nums.size()-1;i++){
            max_jump=max(i+nums[i],max_jump);
            if(max_jump<i+1){
                return false;
            }
        }
        return true;
    }
};