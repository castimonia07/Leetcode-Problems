class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<char,int>> vec;
        string res="";
        for(auto it:freq){
            vec.push_back(it);
        }
        sort(vec.begin(),vec.end(),[](const pair<char,int> &a,const pair<char,int> &b){
            return a.second>b.second;
        });
        for(auto it:vec){
            res+=string(it.second,it.first);
        }
        return res;

    }
};