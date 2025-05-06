class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> f;
        int result;
        // int m=INT_MAX;
        for(int i=0;i<prices.size();i++){
            result=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    result=prices[i]-prices[j];
                    break;
                }
            }
            // result=min(m,result);
            f.push_back(result);

        }
        return f;

        // vector<int> v;
        // int n=
    }
};