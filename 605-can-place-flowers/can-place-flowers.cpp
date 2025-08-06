class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        // int size = fb.size();
        // int cnt = 0;
        // for (int i = 0; i < size; i++) {
        //     if (fb[i] == 0) {
        //         bool emptyleft = (i == 0) || (fb[i - 1] == 0);
        //         bool emptyright = (i == size - 1) || (fb[i + 1] == 0);
        //         if (emptyleft && emptyright) {
        //             fb[i] = 1;
        //             cnt++;
        //         }
        //     }
        // }
        // return (cnt >= n);

        int size = fb.size();
        if (n == 0) return true;
        if (size == 1) {
            return fb[0] == 0 && n <= 1;
        }
        int cnt = 0;
        // Check the first plot
        if (fb[0] == 0 && fb[1] == 0) {
            fb[0] = 1;
            cnt++;
            if (cnt >= n) return true;
        }
        // Check middle plots
        for (int i = 1; i < size - 1; i++) {
            if (fb[i] == 0 && fb[i - 1] == 0 && fb[i + 1] == 0) {
                fb[i] = 1;
                cnt++;
                if (cnt >= n) return true;
            }
        }
        // Check the last plot
        if (fb[size - 1] == 0 && fb[size - 2] == 0) {
            cnt++;
            if (cnt >= n) return true;
        }
        return cnt >= n;
    }
};