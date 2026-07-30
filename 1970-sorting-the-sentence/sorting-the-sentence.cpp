class Solution {
public:
    string sortSentence(string s) {
        vector<string> str(10);
        string temp;
        int indx=0,cnt=0;
        while(indx<=s.size()-1){
            if(s[indx]==' '){
                int i=temp[temp.size()-1]-'0';
                temp.pop_back();
                str[i]=temp;
                temp.clear();
                cnt++;
            }
            else {
                temp+=s[indx];
                // indx++;
            }
            indx++;
        }
        int i=temp[temp.size()-1]-'0';
        temp.pop_back();
        str[i]=temp;
        cnt++;

        string res="";
        for(int i=1;i<cnt;i++){
            res+=str[i]+" ";
        }
        res+=str[cnt];
        return res;

    }
};