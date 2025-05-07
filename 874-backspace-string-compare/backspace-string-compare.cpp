class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        for( char c: s){
            if(c=='#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }
            else{
                st1.push(c);
            }
        }
        for( char c: t){
            if(c=='#'){
                if(!st2.empty()){
                    st2.pop();
                }
            }
            else{
                st2.push(c);
            }
        }
        string a="",b="";
        while(!st1.empty()){
            a+=st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            b+=st2.top();
            st2.pop();
        }
        return a==b;

    }
};