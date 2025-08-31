class Solution {
public:
    bool checkValidString(string s) {
        // stack<int> s1;
        // stack<int> ast;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         s1.push(i);
        //     }
        //     else if(s[i]=='*'){
        //         ast.push(i);
        //     }
        //     else{
        //         if(!s1.empty()){
        //             s1.pop();
        //         }
        //         else if(!ast.empty()){
        //             ast.pop();
        //         }
        //         else return false;
        //     }
        // }
        // while(!s1.empty()){
        //     if(ast.empty()){
        //         return false;
        //     }
        //     else if(ast.top()<s1.top()){
        //         return false;
        //     }
        // }
        // return s1.empty();
        int open=0,close=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='*') open++;
            else open--;
            if(s[n-1-i]==')'||s[n-1-i]=='*') close++;
            else close--;
            if(close<0||open<0){
            return false;
        }
        }
        return true;
    }
};