class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int i = 1;
        while (i < words.size()) {
            string pre = words[i - 1];
            string val = words[i];
            sort(val.begin(), val.end());
            sort(pre.begin(), pre.end());
            if (pre == val) {
                words.erase(words.begin() + i);
            } else {
                pre = val;
                i++;
            }
        }
        return words;
    }
};