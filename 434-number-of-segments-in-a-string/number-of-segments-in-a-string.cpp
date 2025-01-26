class Solution {
public:
    int countSegments(string s) {
        istringstream stream(s);
        string word;
        int cnt=0;
        while(stream>>word){
            cnt++;
        }
        return cnt;
    }
};