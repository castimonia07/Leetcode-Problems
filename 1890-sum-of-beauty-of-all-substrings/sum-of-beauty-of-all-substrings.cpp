class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;

        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> freqMap;  // Stores character frequencies
            vector<int> freqBucket(s.size() + 1, 0); // Frequency tracking
            int maxFreq = 0;
            
            for (int j = i; j < s.size(); j++) {
                char ch = s[j];
                int prevFreq = freqMap[ch];
                int newFreq = ++freqMap[ch];  // Update frequency
                
                // Update frequency bucket
                if (prevFreq > 0) freqBucket[prevFreq]--; // Remove old frequency
                freqBucket[newFreq]++;  // Add new frequency
                
                maxFreq = max(maxFreq, newFreq);  // Update max frequency
                
                // Find minFreq (smallest non-zero frequency)
                int minFreq = INT_MAX;
                for (int k = 1; k <= maxFreq; k++) {
                    if (freqBucket[k] > 0) {
                        minFreq = k;
                        break;
                    }
                }
                
                totalBeauty += (maxFreq - minFreq); // Add beauty for this substring
            }
        }
        return totalBeauty;
    }
};
