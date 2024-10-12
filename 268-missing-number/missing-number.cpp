class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N=nums.size();
        vector<int> hash(N + 1, 0);

        for(int i=0;i<N;i++){
            hash[nums[i]]=1;
        }
        for(int i=0;i<=N;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return -1;

    }
};