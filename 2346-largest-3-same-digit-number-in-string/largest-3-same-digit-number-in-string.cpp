class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> v;
        int prev=INT_MIN;
        for(int i=0;i<=num.size()-3;i++){
            string str="";
            int a=num[i]-0;
            for(int j=i;j<i+3;j++){
                if(num[j]-0==a){
                    str+=num[j];
                }
                else break;
            }
            if(str.size()==3){
                v.push_back(stoi(str));
            }
            else{
                continue;
            }
        }
        string str2="";
        sort(v.begin(),v.end(),greater<int>());
        if(!v.empty()){
            str2+=to_string(v[0]);
        }
        if(str2=="0"){
            return "000";
        }
        return str2;
    }
};