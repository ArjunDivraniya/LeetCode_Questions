class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        vector<int> ex =score;
        sort(ex.begin(), ex.end(), greater<int>());
        
        unordered_map<int, int> m;
        for (int i = 0; i < score.size(); i++) {
            m[ex[i]] =i+1;
        }
        for (int i = 0; i < score.size(); i++) {
            if (m[score[i]] == 1) {
                ans.push_back("Gold Medal");
            } else if (m[score[i]] == 2) {
                ans.push_back("Silver Medal");
            } else if (m[score[i]] == 3) {
                ans.push_back("Bronze Medal");
            } else {
                ans.push_back(to_string(m[score[i]]));
            }
        }
        return ans;
    }
};