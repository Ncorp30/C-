// Time:  O(n)
// Space: O(1)

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        while (i < static_cast<int>(bits.size()) - 1) {
            i += bits[i] + 1;
        }
        return i == static_cast<int>(bits.size()) - 1;
    }
};