class Solution {
public:
    string sortVowels(string s) {
        string vow="";
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                vow+=c;
            }
        }
        string res="";
        sort(vow.begin(),vow.end());
        int i=0;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                res+=vow[i];
                i++;
            }
            else res+=c;
        }
        return res;
    }
};