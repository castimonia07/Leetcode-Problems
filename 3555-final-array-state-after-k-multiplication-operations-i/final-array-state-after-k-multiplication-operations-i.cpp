class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        // vector <int> v;
        int n=nums.size();
        while(k>0){
            int smallest=nums[0];
            int smallestindex=0;
            for(int i=1;i<n;i++){
                if(nums[i]<smallest){
                    smallest=nums[i];
                    smallestindex=i;
                }
            }
            nums[smallestindex]=smallest*multiplier;

            k-=1;
        }
        return nums;
    }
};