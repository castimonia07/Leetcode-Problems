class Solution {
public:
    int maxArea(vector<int>& height) {
    //     int n=height.size();
    //     int area=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=n-1;j>=0;j--){
    //             int a=min(height[i],height[j]);
    //             area=max(area,a*(j-i));
    //         }

    //     }
    //     return area;

    // TWO POINTER APPROACH
    int n=height.size();
    int left=0;
    int right=n-1;
    int area=0;  
    while(left<right){
        area=max(area,(right-left)*min(height[left],height[right]));

        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return area;

    }
};