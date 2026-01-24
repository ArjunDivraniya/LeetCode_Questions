class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
         vector loc(1001, 0);
        for (const auto &t : trips) {
            int passengers = t[0];
            int from = t[1];
            int to = t[2];
            loc[from] += passengers;
            loc[to] -= passengers;
        }
        int usedCapacity = 0;
        for (int x : loc) {
            usedCapacity += x;
            if (usedCapacity > capacity) return false;
        }
        return true;
    }
};