class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(m!=n){
            return false;
        }
        unordered_map<char,char> mapST;
        unordered_map<char,char> mapTS;

        for(int i=0;i<n;i++){
            char c1=s[i],c2=t[i];

            if(mapST.count(c1) && mapST[c1]!=c2)  return false;

            if(mapTS.count(c2) && mapTS[c2]!=c1) return false;

            mapST[c1]=c2;
            mapTS[c2]=c1;
        }
        return true;

    }
};