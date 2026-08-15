class Solution {
public:
    string frequencySort(string s) {
        vector<int> count(256, 0);
        int n = s.length();
        for (char c : s) {
            count[static_cast<unsigned char>(c)]++;
        }
        vector<vector<char>> buckets(n + 1);
        for (int i = 0; i < 256; i++) {
            if (count[i] > 0) {
                buckets[count[i]].push_back(static_cast<char>(i));
            }
        }
        string result = "";
        for (int freq = n; freq > 0; freq--) {
            for (char c : buckets[freq]) {

                result.append(freq, c);
            }
        }

        return result;
    }
};