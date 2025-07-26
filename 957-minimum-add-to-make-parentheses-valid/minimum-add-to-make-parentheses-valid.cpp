class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int add=0;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    add++;
                }
            }
        }
        return add+st.size();
    }
};