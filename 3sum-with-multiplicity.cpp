// Time:  O(n^2), n is the number of distinct A[i]
// Space: O(n)

class Solution {
public:
    int threeSumMulti(vector<int>& A, int target) {
        unordered_map<int, uint64_t> count;
        for (const auto& a : A) {
            ++count[a];
        }
        vector<int> keys;
        keys.reserve(count.size());
        for (const auto& kvp : count) {
            keys.push_back(kvp.first);
        }
        sort(keys.begin(), keys.end());
        uint64_t result = 0;
        for (size_t x = 0; x < keys.size(); ++x) {
            for (size_t y = x; y < keys.size(); ++y) {
                int i = keys[x], j = keys[y], k = target - i - j;
                if (!count.count(k) || k < j) {
                    continue;
                }
                if (i == j && j == k) {
                    result += count[i] * (count[i] - 1) * (count[i] - 2) / 6;
                } else if (i == j && j != k) {
                    result += count[i] * (count[i] - 1) / 2 * count[k];
                } else if (i < j && j < k) {
                    result += count[i] * count[j] * count[k];
                }
            }
        }
        return result % static_cast<int>(1e9 + 7);
    }
};