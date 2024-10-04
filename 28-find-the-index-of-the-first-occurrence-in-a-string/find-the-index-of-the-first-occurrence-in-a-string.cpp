class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=haystack.size();
        int b=needle.size();
        if(a==b && haystack==needle){
            return 0;
        }
        else{
            for(int i=0;i<=a-b;i++){
                if(haystack.substr(i,b)==needle){
                    return i;
                }
            }
        }
        return -1;

    }
};