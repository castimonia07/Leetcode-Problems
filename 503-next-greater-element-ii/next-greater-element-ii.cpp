class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,-1);
        stack<int > st;
        for(int i=0;i<2*n-1;i++){
            while(!st.empty()&& nums[st.top()]<nums[i%n]){
                v[st.top()]=nums[i%n];
                st.pop();
            }
            if(i<n){
                st.push(i);
            }
        }
        return v;
    }
};