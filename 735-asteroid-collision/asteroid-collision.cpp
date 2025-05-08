class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int a: asteroids){
            while(!st.empty() && a<0 && st.top()>0){
                if(abs(a)>abs(st.top())){
                    st.pop();
                    continue;
                }
                else if(abs(a)==abs(st.top())){
                    st.pop();
                    a=0;
                }
                else{
                    a=0;
                }
                break;
            }
            if(a!=0){
                st.push(a);
            }
        }
        vector<int> v(st.size());
        for(int i=st.size()-1;i>=0;i--){
            v[i]=st.top();
            st.pop();
        }
        return v;
    }
};