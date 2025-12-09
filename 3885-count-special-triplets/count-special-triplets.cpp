class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const long long mod=1e9 + 7;
        // long long cnt=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int k=i+1;k<nums.size();k++){
        //         if(nums[i]==nums[k]){
        //             for(int j=i+1;j<k;j++){
        //                 int a=(int)nums[i]/2;
        //                 if(a==nums[j] && a*2==nums[k]){
        //                     cnt=(cnt+1)%mod;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return cnt;
        // int j=0;
        // int cnt=0;
        // while(j<nums.size()){
        //     int a=nums[j];
        //     int lc=0,rc=0;
        //     for(int i=0;i<j;i++){
        //         if(nums[j]*2==nums[i]){
        //             lc++;
        //         }
        //     }
        //     for(int k=j+1;k<nums.size();k++){
        //         if(nums[j]*2==nums[k]){
        //             rc++;
        //         }
        //     }
        //     cnt=(cnt+(lc*rc))%mod;
        //     j++;
        // }
        // return cnt;

        long long ans=0;
        unordered_map<long long,long long> l,r;
        for(int num:nums){
            r[num]++;
        }
        for(int j=0;j<nums.size();j++){
            long long x=nums[j];
            r[x]--;

            long long t=x*2ll;
            long long lc=0;
            long long rc=0;
            if(l.count(t)) lc=l[t];
            if(r.count(t)) rc=r[t];

            long long res=(lc * rc)%mod;
            ans=(ans+res)%mod;
            l[x]++;
        }
        return ans;
    }
};