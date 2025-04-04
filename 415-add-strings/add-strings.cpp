class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size()-1;
        int m=num2.size()-1;
        string sum="";
        int c=0;
        while(n>=0 || m>=0 ||c>0){
            int d1=0,d2=0;
            if(n>=0){
                d1=num1[n]-'0';
            }
            if(m>=0){
                d2=num2[m]-'0';
            }
            int s=d1+d2+c;
            sum += ('0' + (s % 10));
            c=s/10;
            n--;
            m--;
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};