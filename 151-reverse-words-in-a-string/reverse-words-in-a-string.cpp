class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        istringstream stream(s);
        string words;
        while(stream>>words){
            st.push_back(words);
        }
        string rs;
        for(int i=st.size()-1;i>=0;i--){
            rs+=st[i];
            if(i!=0){
                rs+=' ';
            }
        }
        return rs;
    }
};