class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<int> st;
        // int add=0;
        // for(char c:s){
        //     if(c=='('){
        //         st.push(c);
        //     }
        //     else{
        //         if(!st.empty()){
        //             st.pop();
        //         }
        //         else{
        //             add++;
        //         }
        //     }
        // }
        // return add+st.size();

        int bal=0,add=0;
        for(char c:s){
            if(c=='('){
                bal++;
            }
            else{
                if(bal>0){
                    bal--;
                }
                else{
                    add++;
                }
            }
        }
        return bal+add;


    }
};