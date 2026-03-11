class Solution {
public:
    int maxvalue(vector<int>& piles) {
        int maxval = piles[0];
        for (int i = 0; i < piles.size(); i++) {
            if (maxval < piles[i]) {
                maxval = piles[i];
            }
        }
        return maxval;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = maxvalue(piles);

        while (low <= high) {
            long long time = 0;
            int mid = low + (high - low) / 2;
            for (int i = 0; i < piles.size(); i++) {
                time += (piles[i] + mid - 1) / mid;
            }
            if (time > h) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low ;
    }
};