class Solution {
public:
    static const int MOD = 1e9 + 7;;
    long long facto(long long x){
        long long fact=1;
        for(int i=1;i<=x;i++){
            fact=(fact*i)%MOD;
        }
        return fact;
    }
    int countPermutations(vector<int>& complexity) {
        int n=complexity.size();
        if(n==1) return 1;
        for(int i=1;i<n;i++){
            if(complexity[i]<=complexity[0]){
                return 0;
                break;
            }
        }
        return facto((n-1));
    }
};