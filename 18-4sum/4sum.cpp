class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // set<vector<int>> st;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             for(int m=k+1;m<n;m++){
        //                 long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[m];
        //                 if(target==sum){
        //                     vector<int> temp={nums[i],nums[j],nums[k],nums[m]};
        //                     sort(temp.begin(),temp.end());
        //                     st.insert(temp);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return vector<vector<int>>(st.begin(),st.end());

        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    if(sum==target){
                        k++;
                        l--;
                    }
                    if(sum<target){
                        k++;
                    }
                    if(sum>target){
                        l--;
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};