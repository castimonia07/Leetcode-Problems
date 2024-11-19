class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> lic_fre(26,0);
        for(char c: licensePlate){
            if(isalpha(c)){
                lic_fre[tolower(c)-'a']++;
            }
        }
        string shortest="";

        for(string word: words){
            vector<int> word_freq(26,0);
            for(char c : word)
            {
                word_freq[tolower(c)-'a']++;
            }
        
            bool is_comp=true;
            for(int i=0; i<26;i++){
                if(lic_fre[i]>word_freq[i]){
                    is_comp=false;
                    break;
                }
            }
            if(is_comp && (shortest.empty()|| word.length()<shortest.length())){
                shortest=word;
            }
        }
        return shortest;
    }

};