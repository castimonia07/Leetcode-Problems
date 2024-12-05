class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingcnt=0;
        int current=1;
        int i=0;
        while(missingcnt<k){
            if(i<arr.size()&&arr[i]==current){
                i++;
            }
            else{
                missingcnt++;
                if(missingcnt==k){
                    return current;
                }
            }
            current++;
        }
        return -1;


    }
}; 