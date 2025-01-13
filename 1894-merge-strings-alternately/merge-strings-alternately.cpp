class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3="";
        int n1=word1.size();
        int n2=word2.size();
        int n=max(n1,n2);
        for(int i=0;i<n;i++){
            if(i<n1){
                word3+=word1[i];
            }
            if(i<n2){
                word3+=word2[i];
            }
        }
        return word3;
    }
};