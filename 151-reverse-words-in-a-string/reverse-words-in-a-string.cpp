class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        stringstream ss(s);
        string word;
        while(ss>>word){
            vec.push_back(word);
        }
        reverse(vec.begin(),vec.end());
        string res;
        int n=vec.size();
        for(int i=0;i<n-1;i++){
            res+=vec[i]+" ";
        }
        return res+vec[n-1];
    }
};