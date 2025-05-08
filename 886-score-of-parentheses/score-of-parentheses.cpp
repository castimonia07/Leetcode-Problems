class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(char c: s){
            if(c=='('){
                st.push(0);
            }
            else if(c==')'){
                if(st.top()==0){
                    st.pop();
                    st.push(1);
                }
                else{
                    int sum=0;
                    while(!st.empty() && st.top()!=0){
                        sum+=st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(2*sum);
                }
            }
        }
        int score=0;
        while(!st.empty()){
            score+=st.top();
            st.pop();
        }
        return score; 
    }
};