// Time:  O(1)
// Space: O(1)

class Solution {
public:
    int maxA(int N) {
        if (N < 7) {
            return N;
        }
        int dp[7] = {0, 1, 2, 3, 4, 5, 6};
        for (int i = 7; i <= N; ++i) {
            dp[i % 7] = max(dp[(i - 4) % 7] * 3, dp[(i - 5) % 7] * 4);
        }
        return dp[N % 7];
    }
};


// Time:  O(n)
// Space: O(1)
class Solution2 {
public:
    int maxA(int N) {
        if (N < 7) {
            return N;
        }
        vector<int> dp(6);
        iota(dp.begin(), dp.end(), 0);
        for (int i = 7; i <= N; ++i) {
            dp[i % 6] = max(dp[(i - 4) % 6] * 3, dp[(i - 5) % 6] * 4);
        }
        return dp[N % 6];
    }
};