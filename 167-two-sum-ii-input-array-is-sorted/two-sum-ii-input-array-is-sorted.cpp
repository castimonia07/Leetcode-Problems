class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        // for(int i=0;i<numbers.size();i++){
        //     for(int j=i+1;j<numbers.size();j++){
        //         if(numbers[i]+numbers[j]==target){
        //             v.push_back(i+1);
        //             v.push_back(j+1);
        //             break;
        //         }
        //     }
        // }
        // return v;
        int n=numbers.size();
        int low=0,high=n-1;
        while(low<=high){
            if(numbers[high]+numbers[low]==target){
                v.push_back(low+1);
                v.push_back(high+1);
                break;
            }
            if(numbers[low]+numbers[high]>target){
                high--;
            }
            else low++;
        }
        return v;
    }
};