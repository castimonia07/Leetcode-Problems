class Solution {
public:
    string largestGoodInteger(string num) {
        // vector<int> v;
        int maxi=-1;
        for(int i=0;i<num.size();i++){
            string str=num.substr(i,3);
            if(str[0]==str[1]&&str[1]==str[2]){
                maxi=max(maxi,stoi(str));
            }
        }
        if(maxi==-1){
            return "";
        }
        else if(maxi==0){
            return "000";
        }
        string str2=to_string(maxi);
        return str2;
    }
};