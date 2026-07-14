class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int cnt=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='('){
                if(cnt>0) str+=s[i];
                cnt++;
            }
            if(s[i]==')'){
                cnt--;
                if(cnt>0) str+=s[i];
            }
        }
        return str;
    }
};