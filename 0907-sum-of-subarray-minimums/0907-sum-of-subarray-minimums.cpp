class Solution {
public:
    vector<int> nsefind(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> s;
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >arr[i]) {
                s.pop();
            }
            nse[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        return nse;
    }

    vector<int> psefind(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        stack<int> s;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }

            pse[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse = psefind(arr);
        vector<int> nse = nsefind(arr);

        long long total = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;

            total = (total + (arr[i] * left%mod * right%mod ))%mod;
        }

        return total;
    }
};