class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int j = tokens.size() - 1;
        int i = 0;
        int ans = 0;
        int score =0;
        while (i <= j) {
            if (power >= tokens[i]) {
                power -= tokens[i];
                ans++;
                  i++;
            

            } else {
                if (ans > 0) {
                    power += tokens[j];
                    j--;
                    ans--;
                    

                } else {
                    break;
                }

            }
          
            score = max(score, ans);
        }
        return score;
    }
};