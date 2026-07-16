class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='M') sum+=1000;
            else if(c=='D') sum+=500;
            else if(c=='C'){
                if(s[i+1]=='D'||s[i+1]=='M') sum-=100;
                else sum+=100;
            }
            else if(c=='L') sum+=50;
            else if(c=='X'){
                if(s[i+1]=='L'||s[i+1]=='C') sum-=10;
                else sum+=10;
            }
            else if(c=='V') sum+=5;
            else if(c=='I'){
                if(i<s.size() &&(s[i+1]=='V'||s[i+1]=='X') ) sum-=1;
                else sum+=1;
            }
        }
        return sum;
    }
};