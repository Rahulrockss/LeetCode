class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> lastSeen;
    int minLength = INT_MAX;

    for (int i = 0; i < cards.size(); ++i) {
        if (lastSeen.find(cards[i]) != lastSeen.end()) {
            minLength = std::min(minLength, i - lastSeen[cards[i]] + 1);
        }
        lastSeen[cards[i]] = i;
    }

    return (minLength == INT_MAX) ? -1 : minLength;
    }
};