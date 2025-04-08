class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            // int n= nums1.size();
            // int m=nums2.size();
            // vector<int> v;
            // for(int i=0;i<n;i++){
            //     int g=-1;
            //     for(int j=0;j<m;j++){
            //         if(nums1[i]==nums2[j]){
            //             for(int k=j+1;k<m;k++){
            //                 if(nums2[k]>nums2[j]){
            //                     g=nums2[k];
            //                     break;
            //                 }
            //             }
            //             break;
            //         }
            //     }  
            //     v.push_back(g); 
            // }   
            // return v;

            unordered_map<int,int> nextGreater;
            stack<int> st;

            for(int i=nums2.size()-1;i>=0;--i){
                while(!st.empty() && st.top()<=nums2[i]){
                    st.pop();
                }
                nextGreater[nums2[i]]=st.empty()?-1:st.top();
                st.push(nums2[i]);
            }
            vector<int> ans;
            for(int num: nums1){
                ans.push_back(nextGreater[num]);
            }
            return ans;

    }
};