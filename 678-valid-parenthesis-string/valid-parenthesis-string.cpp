class Solution {
public:
    bool checkValidString(string s) {
        // stack<int> st;
        // stack<int> ast;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push(i);
        //     }
        //     else if(s[i]=='*'){
        //         ast.push(i);
        //     }
        //     else{
        //         if(!st.empty()){
        //             st.pop();
        //         }
        //         else if(!ast.empty()){
        //             ast.pop();
        //         }
        //         else return false;
        //     }
        // }
        // while(!st.empty()){
        //     if(ast.empty()){
        //         return false;
        //     }
        //     else if(ast.top()<st.top()){
        //         return false;
        //     }
        //     // else continue;
        // }
        // return st.empty();
        int cc=0,oc=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='*') oc++;
            else oc--;
            if(s[n-1-i]==')'||s[n-1-i]=='*') cc++;
            else cc--;
            if(oc<0 || cc<0) return false;
        }
        return true;
    }
};