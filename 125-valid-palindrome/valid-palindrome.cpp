class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c: s){
            if(isalnum(c)) {
                str+=tolower(c);
            }
        }
        int n=str.size();
        int low=0,high=n-1;

        while(low<=high){
            if(str[low]!=str[high]){
                return false;
                }
            low++;
            high--;
        }
        return true;
            
    }
};