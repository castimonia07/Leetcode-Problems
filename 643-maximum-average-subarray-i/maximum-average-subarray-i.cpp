class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // int n=nums.size();
        // double maxAvg = INT_MIN;
        // for (int i = 0; i <= n - k; i++) {
        //     int sum = 0;
        //     for (int j = i; j < i + k; j++) {
        //         sum += nums[j];
        //     }
        //     maxAvg = max(maxAvg, sum / (double)k);
        // }
        // return maxAvg;

        int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxsum=sum;
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            maxsum=max(maxsum,sum);
        }
        return maxsum/k;
        
    }
};