class Solution {
public:
    string removeDuplicates(string s) {
        // int i=0;
        // while(i<static_cast<int>(s.length())-1){
        //     if(s[i]==s[i+1]){
        //         s.erase(i,2);
        //         if(i>0) i--;
        //         else i=0;
        //     }
        //     else{i++;}
        // }
        // return s;

        stack<int> st;
        for(char c:s){
            if(!st.empty() && st.top()==c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string t="";
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;

    }
};