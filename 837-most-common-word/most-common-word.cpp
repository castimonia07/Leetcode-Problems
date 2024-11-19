class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(char& c : paragraph){
            if(ispunct(c)) c =' ';
            c=tolower(c);
        }
        unordered_map<string,int>word_freq;
        unordered_set<string> banned_set(banned.begin(),banned.end());
        istringstream stream(paragraph);
        string word;
        while(stream>>word){
            if(banned_set.find(word)==banned_set.end()){
                word_freq[word]++;
            }
        }
        string result="";
        int max_count=0;
        for(auto pair: word_freq){
            const string word=pair.first;
            int count=pair.second;
            if(count>max_count){
                max_count=count;
                result=word;
            }

        }
        return result;

    }
};