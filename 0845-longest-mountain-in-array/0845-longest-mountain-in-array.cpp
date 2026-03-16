class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if (arr.size() < 3)
            return 0;
        int n = arr.size();

        int ans = 0;

        int i = 1;
        while (i < n) {
            bool inc = false;
            bool dec = false;
            int count = 1;
            while (i < n && arr[i] > arr[i - 1] ) {
                inc = true;
                count++;
                i++;
            }

            while (i < n && arr[i] < arr[i - 1]) {
                dec = true;
                count++;
                i++;
            }
            if (inc && dec) {
                ans = max(ans, count);
            }

            while (i < n && arr[i] == arr[i - 1]) {
                i++;
            }
        }
        return ans;
    }
};