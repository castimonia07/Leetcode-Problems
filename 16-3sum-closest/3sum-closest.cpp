class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // int res=INT_MAX;
        // int cs=nums[0]+nums[1]+nums[2];
        // // for(int n=1;n<nums.size()-2;n++){
        // //     int sum=0;
        // //     sum=nums[n]+nums[n+1]+nums[n+2];
        // //     if(abs(cs-target)>abs(sum-target)){
        // //         cs=sum;
        // //     }
        // //     if(sum==target){
        // //         return sum;
        // //     }
        // //     n++;
        // // }
        
        // return cs;

        // int cs=nums[0]+nums[1]+nums[2];
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             int sum=nums[i]+nums[j]+nums[k];
        //             if(abs(sum-target)<abs(cs-target)){
        //                 cs=sum;
        //             }
        //         }
        //     }
        // }
        // return cs;
//         class Solution {
// public:
//     int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int cs = nums[0] + nums[1] + nums[2]; // initial closest sum

        for(int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(abs(sum - target) < abs(cs - target)) {
                    cs = sum;
                }

                if(sum < target) {
                    left++;
                }
                else if(sum > target) {
                    right--;
                }
                else {
                    return sum; // exact match
                }
            }
        }

        return cs;
    }
};
