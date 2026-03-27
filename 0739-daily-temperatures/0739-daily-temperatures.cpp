class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        vector<int> ans(n,0);
        stack<int> s;
        for(int i =n-1;i>=0 ;i--){
            while(!s.empty() && temperatures[s.top()] <=temperatures[i]){
                s.pop();
            }
          ans[i] = (!s.empty()) ? s.top() -i : 0;
            s.push(i);
        }
        return ans;
    }
};