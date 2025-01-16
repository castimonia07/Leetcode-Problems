class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v;
        for(int i=0;i<A.size();i++){
            unordered_map<int,int> m1;
            int sum=0;
            for(int j=0;j<=i;j++){
                m1[A[j]]++;
            }
            for(int j=0;j<=i;j++){
                m1[B[j]]++;
            }
            for(auto& pair:m1){
                if(pair.second>1){
                    sum+=1;
                }
            }
            v.push_back(sum);
        }
        return v;
        
    }
};