class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        string s1=str;
        reverse(s1.begin(),s1.end());
        return str==s1;
    }
};