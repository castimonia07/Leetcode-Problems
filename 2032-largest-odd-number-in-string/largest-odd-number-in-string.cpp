class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int i=0,j=n-1;
        while(j>=0){
            if((num[j]-'0')%2==0) j--;
            else break;
        }
        return num.substr(i,j-i+1);
    }
};