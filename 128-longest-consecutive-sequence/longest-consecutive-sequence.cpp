class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;   // at least one streak will be there 
        int longest=1;  // minimum longest length will be one

        for(int i=1;i<n;i++){   // i is initiallised to one because n-1 will become -1 at 0
            if(nums[i]==nums[i-1]){
                continue;  //skips the duplicates
            }
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                longest=max(longest,count);  //else statement basically initiallizes the count to one after getting the elent of the first consequtivr sequence for the future consequtive sequence
                count=1;
            }

        }
        longest=max(longest,count);
        return longest;

    }
};