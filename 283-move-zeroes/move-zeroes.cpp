class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> temp;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         temp.push_back(nums[i]);
        //     }
        // }
        // int n1=temp.size();
        // for(int i=n1;n1<n;i++){
        //     temp.push_back(0);
        // }
        // nums=temp;

        int n=nums.size();
        int j=-1;
        for (int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) {
            return;
        }

        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }

    }
};