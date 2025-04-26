class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // int n=temperatures.size();
        // vector<int> v(n,0);
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(temperatures[j]>temperatures[i]){
        //             v[i]=j-i;
        //             break;
        //         }
        //     }
        // }
        // return v;

        int n=temperatures.size();
        vector<int> v(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int idx=st.top();
                st.pop();
                v[idx]=i-idx;
            }
            st.push(i);
        }
        return v;
    }
};