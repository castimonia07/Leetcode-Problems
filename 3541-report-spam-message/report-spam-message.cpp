class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        set<string>st(bannedWords.begin(),bannedWords.end());
        int s1=message.size() , s2=st.size();
        int cnt=0;
        for(int i=0;i<s1;i++){
            if(st.find(message[i])!=st.end()){
                cnt++;
            }
        }

        if(cnt>=2) return true;
        return false;
    }
};