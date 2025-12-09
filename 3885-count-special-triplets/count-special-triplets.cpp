// class Solution {
// public:
//     int specialTriplets(vector<int>& nums) {
//         const long long mod=1e9 + 7;
//         // long long cnt=0;
//         // for(int i=0;i<nums.size();i++){
//         //     for(int k=i+1;k<nums.size();k++){
//         //         if(nums[i]==nums[k]){
//         //             for(int j=i+1;j<k;j++){
//         //                 int a=(int)nums[i]/2;
//         //                 if(a==nums[j] && a*2==nums[k]){
//         //                     cnt=(cnt+1)%mod;
//         //                 }
//         //             }
//         //         }
//         //     }
//         // }
//         // return cnt;
//         // int j=0;
//         // int cnt=0;
//         // while(j<nums.size()){
//         //     int a=nums[j];
//         //     int lc=0,rc=0;
//         //     for(int i=0;i<j;i++){
//         //         if(nums[j]*2==nums[i]){
//         //             lc++;
//         //         }
//         //     }
//         //     for(int k=j+1;k<nums.size();k++){
//         //         if(nums[j]*2==nums[k]){
//         //             rc++;
//         //         }
//         //     }
//         //     cnt=(cnt+(lc*rc))%mod;
//         //     j++;
//         // }
//         // return cnt;

//         long long ans=0;
//         unordered_map<long long,long long> l,r;
//         for(int num:nums){
//             r[num]++;
//         }
//         for(int j=0;j<nums.size();j++){
//             long long x=nums[j];
//             r[x]--;

//             long long t=x*2ll;
//             long long lc=0;
//             long long rc=0;
//             if(l.count(t)) lc=l[t];
//             if(r.count(t)) rc=r[t];

//             long long res=(lc * rc)%mod;
//             ans+=res;
//             l[x]++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long MOD = 1e9 + 7;
        int n = nums.size();

        // left: freq of numbers on the left side of j
        // right: freq of numbers on the right side of j
        unordered_map<long long, long long> left, right;

        // Step 1: fill right with freq of all numbers
        for (int x : nums) {
            right[x]++;
        }

        long long ans = 0;

        // Step 2: iterate each index as middle j
        for (int j = 0; j < n; j++) {
            long long x = nums[j];

            // current position j is now middle, so remove it from right side
            right[x]--;

            long long t = x * 2LL;  // target value for nums[i] and nums[k]

            long long lc = 0;
            long long rc = 0;

            // how many 2*x on left and right
            if (left.count(t)) lc = left[t];
            if (right.count(t)) rc = right[t];

            // add all combinations of (i, j, k)
            long long add = (lc * rc) % MOD;
            ans = (ans + add) % MOD;

            // now this x becomes part of left side for future j's
            left[x]++;
        }

        return (int)ans;
    }
};
