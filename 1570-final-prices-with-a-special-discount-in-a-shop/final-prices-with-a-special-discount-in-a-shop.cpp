class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // vector<int> f;
        // int result;
        // // int m=INT_MAX;
        // for(int i=0;i<prices.size();i++){
        //     result=prices[i];
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j]<=prices[i]){
        //             result=prices[i]-prices[j];
        //             break;
        //         }
        //     }
        //     // result=min(m,result);
        //     f.push_back(result);

        // }
        // return f;

        int n=prices.size();
        vector<int> v(prices);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                v[st.top()]=prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        return v;



    }
};