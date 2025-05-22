class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        // int n=nums.size();
        // long long sum=0;
        // for(int i=0;i<n;i++){
        //     int mini=nums[i],maxi=nums[i];
        //     for(int j=i;j<n;j++){
        //         mini=min(mini,nums[j]);
        //         maxi=max(maxi,nums[j]);
        //         sum+=(abs(mini-maxi));
        //     }
        // }
        // return sum;


        int n=nums.size();
        stack<int> st;
        vector<int> ple(n),nle(n),pge(n),nge(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            if(st.empty()){
                ple[i]=-1;
            }
            else{
                ple[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                nle[i]=n;
            }
            else{
                nle[i]=st.top();
            }
            st.push(i);
        }

        while(!st.empty()) st.pop();
        
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                st.pop();
            }
            if(st.empty()){
                pge[i]=-1;
            }
            else{
                pge[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i]=n;
            }
            else{
                nge[i]=st.top();
            }
            st.push(i);
        }
        
        long long sum=0;
        for(int i=0;i<n;i++){
            long long maxi=(long long)(i-pge[i])*(nge[i]-i);
            long long mini=(long long)(i-ple[i])*(nle[i]-i);
            sum+=(maxi-mini)*nums[i];
        }
        return sum;
        

    }
};