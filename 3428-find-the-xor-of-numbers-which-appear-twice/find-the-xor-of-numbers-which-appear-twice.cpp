class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

        // int n=nums.size();
        // map<int,int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        // }
        // int result=0;
        // for(auto it:mpp){
        //     if(it.second==2){
        //         result=result^it.first;
        //     }
        // }
        // return result;

        int maxi=nums[0];
        int n=nums.size();

        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }

        vector<int> hash(maxi+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

        int result=0;

        for(int i=0;i<=maxi;i++){
            if(hash[i]==2){
                result^=i;
            }
        }
        return result;



    }
};