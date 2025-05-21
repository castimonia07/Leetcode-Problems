class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        // int sum=0;
        // int mod= 1e9+7;
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int mini=arr[i];
        //     for(int j=i;j<n;j++){
        //         mini=min(mini,arr[j]);
        //         sum=(sum+mini)%mod;
        //     }
        // }
        // return sum;

        int n=arr.size();
        stack<int> st;
        vector<int> prev(n);
        vector<int> next(n);
        int mod= 1e9 +7;
        long long sum=0;

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                prev[i]=i+1;
            }
            else{
                prev[i]=i-st.top();
            }
            st.push(i);
        }
         while(!st.empty()) st.pop();

         for(int i=n-1;i>=0;i--){
            while(!st.empty() &&arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                next[i]=n - i;
            }
            else{
                next[i]=st.top()-i;
            }
            st.push(i);
         }
         for(int i=0;i<n;i++){
            long long total=(long long)arr[i]*prev[i]*next[i];
            sum=(sum+total)%mod;
         }
         return sum;


    }
};