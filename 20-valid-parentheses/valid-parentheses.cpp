class Solution {
public:
    bool isValid(string s) {
        // stack<int> st;
        // for(char c: s){
        //     if(c=='(' || c=='[' || c=='{'){
        //         st.push(c);
        //     }
        //     else if(c==')' || c==']' || c=='}'){
        //         if(st.empty()){
        //             return false;
        //         }
        //         char top= st.top();
        //         st.pop();
        //         if(c==')' && top!='(' || c==']' && top!='[' || c=='}' && top!='{' ){
        //             return false;
        //         }
        //     }
        // }
        // return (st.empty());
        int n=s.size();
        map<int ,int> mp;
        mp['(']=+1;
        mp['[']=+2;
        mp['{']=+3;
        mp[')']=-1;
        mp[']']=-2;
        mp['}']=-3;

        stack<int> st;
        for(auto c:s){
            if(mp[c]>0) st.push(c);
            else{
                if(st.empty() || mp[c]+mp[st.top()]!=0){return false;}
                st.pop(); 
            }

        }
        return(st.empty());

        
    }
};