class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<int> k;
        // int n=nums.size();
        // int a=0,b=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]<0){
        //         a++;
        //     }
        //     else b--;
        // }
        // int x=0;
        // while(x<n){
        //     for(int x=a;x<n;x++){
        //         if(nums[x]>0){
        //             k.push_back(nums[x]);
        //             break;
        //         }
        //     }
        //     for(int x=0;x<a;x++){
        //         if(nums[x]<0){
        //             k.push_back(nums[x]);
        //             break;
        //         }
        //     }
        //     x++;
        // }
        // return k;

        int n=nums.size();
        vector<int> a(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                a[pos]=nums[i];
                pos+=2;
            }
            else{
               a[neg]=nums[i];
               neg+=2; 
            }
        }
        return a;



    }
};