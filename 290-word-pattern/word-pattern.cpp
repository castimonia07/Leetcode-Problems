class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream stream(s);
        vector<string> words;
        string word;
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        
        while(stream>>word){
            words.push_back(word);
        }
        if(pattern.size() != words.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            char ch=pattern[i];
            string st=words[i];

            if(m1.find(ch)!=m1.end() && m1[ch]!=st){
                return false;
            }
            else if(m2.find(st)!=m2.end() && m2[st]!=ch){
                return false;
            }
            else{
                m1[ch]=st;
                m2[st]=ch;
            }
        }
        return true;

    }
};