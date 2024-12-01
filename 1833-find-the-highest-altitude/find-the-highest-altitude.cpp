class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int g=0;
        int gn=0;
        for(int i=0;i<n;i++){
            g+=gain[i];
            gn=max(gn,g);
        }
        return gn;
    }
};