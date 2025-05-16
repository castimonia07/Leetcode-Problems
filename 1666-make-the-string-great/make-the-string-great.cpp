class Solution {
public:
    string makeGood(string s) {
        bool changed = true;
        while (changed) {
            changed = false;
            string temp = "";
            for (int i = 0; i < s.size(); ++i) {
                if (i < s.size() - 1 && abs(s[i] - s[i+1]) == 32) {
                    // skip this and next character
                    ++i;
                    changed = true;
                } else {
                    temp += s[i];
                }
            }
            s = temp;
        }
        return s;
    


        // stack<int> st;
        // for(char c: s){
        //     if(!st.empty() && abs(st.top() - c)==32){
        //         st.pop();
        //     }
        //     else{
        //         st.push(c);
        //     }
        // }
        // string t="";
        // while(!st.empty()){
        //     t+=st.top();
        //     st.pop();
        // }
        // reverse(t.begin(), t.end());
        // return t;
    }
};