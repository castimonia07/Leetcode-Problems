class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        // for(int i=0;i<s.size();i++){
        //     for(int j=i+1;j<s.size();j++){
        //         string str=s.substr(i,j-i+1);
        //         unordered_map<char,int> mp;
        //         for(char c:str){
        //             mp[c]++;
        //         }
        //         int max_ele=INT_MIN;
        //         int min_ele=INT_MAX;
        //         for(auto it:mp){
        //             max_ele=max(max_ele,it.second);
        //             min_ele=min(min_ele,it.second);
        //         }
        //         sum+=max_ele-min_ele;
        //     }
        // }
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> mp;
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                int m=0,n=INT_MAX;
                for(auto it:mp){
                    m=max(m,it.second);
                    n=min(n,it.second);
                }
                sum+=(m-n);
            }
        }
        return sum;
    }
};