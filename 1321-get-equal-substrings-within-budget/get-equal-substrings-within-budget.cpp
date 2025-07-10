class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        // int n=s.size();
        // int maxlen=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=abs(s[j]-t[j]);
        //         if(sum<=maxCost){
        //             maxlen=max(maxlen,j-i+1);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return maxlen;

        int n=s.size();
        int maxlen=0;
        int sum=0;
        int left=0;
        for(int i=0;i<n;i++){
            sum+=abs(s[i]-t[i]);
            // maxlen=max(maxlen,i-left+1);
            while(sum>maxCost){
                sum -= abs(s[left] - t[left]);
                left++;
            }
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};