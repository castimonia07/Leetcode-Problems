class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> v;
        // int n=nums1.size();
        // int m=nums2.size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(nums2[j]==nums1[i]){
        //             v.push_back(nums2[j]);
        //             break;
        //         }

        //     }
        // }
        // return v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> v;
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                v.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return v;


    }
};