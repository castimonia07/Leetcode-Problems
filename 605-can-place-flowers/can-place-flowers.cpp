class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        if (n == 0) return true;
        if (size == 1) {
            return flowerbed[0] == 0 && n <= 1;
        }
        int cnt = 0;
        // Check the first plot
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            cnt++;
            if (cnt >= n) return true;
        }
        // Check middle plots
        for (int i = 1; i < size - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                cnt++;
                if (cnt >= n) return true;
            }
        }
        // Check the last plot
        if (flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0) {
            cnt++;
            if (cnt >= n) return true;
        }
        return cnt >= n;
    }
};