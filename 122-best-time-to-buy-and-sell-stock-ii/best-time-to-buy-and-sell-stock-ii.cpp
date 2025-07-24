class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(prices[i+1]>prices[i]){
                sum+=(prices[i+1]-prices[i]);
            }
            // else continue;
        }
        // int maxpro=sum;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(prices[j]>prices[i]){
        //             maxpro=max(maxpro,prices[j]-prices[i]);
        //         }
        //         else continue;
        //     }
        // }
        // return maxpro;

        return sum;
    }
};