class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> str;
        istringstream stream(s);
        string word;
        while(stream>>word){
            str.push_back(word);
        }
        int n=str.size();
        string a=str[n-1];
        return a.size();
    }
};