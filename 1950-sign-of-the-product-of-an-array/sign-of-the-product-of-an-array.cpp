class Solution {
public:
    int arraySign(vector<int>& nums) {
        // int n=nums.size();
        // long long pro=1;
        // for(int i=0;i<n;i++){
        //     pro*=nums[i];   
        // }
        // if(pro>0){
        //     return 1;
        // }
        // else if(pro==0){
        //     return 0;
        // }
        // else return -1;
        int n=0;
        for(int num:nums){
            if(num==0) return 0;
            else if(num<0){
                n++;
            }
        }
        if(n%2==0){
            return 1;
        }
        else return -1;

    }
};