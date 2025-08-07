class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) return a[1] < b[1]; // same height, smaller k first
            return a[0] > b[0]; // taller first
        });

        vector<vector<int>> result;
        for (auto& person : people) {
            result.insert(result.begin() + person[1], person);
        }

        return result;
    }
};
