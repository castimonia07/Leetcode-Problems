class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int j=0;
        int maxfruits=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[fruits[i]]++;
            while(freq.size()>2){
                freq[fruits[j]]--;
                if(freq[fruits[j]]==0){
                    freq.erase(fruits[j]);
                }
                j++;
            }
            maxfruits=max(maxfruits,i-j+1);
        }
        return maxfruits;
    }
};