class Solution {
public:
    // int check(string s){
    //     unordered_map<char,int> mpp;
    //     for(char c:s){
    //         mpp[c]++;
    //     }
    //     int mini=INT_MAX;
    //     int maxi=INT_MIN;
    //     for(auto it:mpp){
    //         mini=min(mini,it.second);
    //         maxi=max(maxi,it.second);
    //     }
    //     return (maxi-mini);
    // }
    int sum=0;
    int beautySum(string s) {
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> mpp;
            for(int j=i;j<s.size();j++){
                mpp[s[j]]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;

                for(auto it:mpp){
                    mini=min(mini,it.second);
                    maxi=max(maxi,it.second);
                }
                int check=(maxi-mini);
                sum+=check;
            }
        }
        return sum;
    }
};