class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq,first_occ,last_occ;
        int deg=0;
        int min_len=nums.size();
        // int ele;

        for(int i=0;i<min_len;i++){
            int ele=nums[i];
            freq[ele]++;
            deg=max(deg,freq[ele]);

            if(first_occ.find(ele)==first_occ.end()){
                first_occ[ele]=i;
            }
            last_occ[ele]=i;

        }
        for(auto x:freq){
            int ele=x.first;    //indicates the element of the array
            if(x.second==deg){  //.second is used to fnd the no. of appearance of it in the array
                int len=last_occ[ele]-first_occ[ele]+1;   
                min_len=min(min_len,len);
            }
        }
        return min_len;

    }
};