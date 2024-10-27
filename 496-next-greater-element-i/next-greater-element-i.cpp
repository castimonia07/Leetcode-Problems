class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            int n= nums1.size();
            int m=nums2.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                int g=-1;
                for(int j=0;j<m;j++){
                    if(nums1[i]==nums2[j]){
                        for(int k=j+1;k<m;k++){
                            if(nums2[k]>nums2[j]){
                                g=nums2[k];
                                // v.push_back(g);
                                break;
                            }
                        }
                        break;
                    }
                }  
                v.push_back(g); 
            }   
            return v;
    }
};