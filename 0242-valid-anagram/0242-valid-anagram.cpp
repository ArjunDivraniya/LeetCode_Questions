// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;

//         vector<int> count(26, 0);
//         for (int i = 0; i < s.length(); i++) {
//             count[s[i] - 'a']++;
//             count[t[i] - 'a']--;
//         }

//         for (int c : count) {
//             if (c != 0) return false;
//         }

//         return true;
//     }
// };

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length())
//             return false;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t;
//     }
// };

#include <unordered_set>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())return false;
          
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }
        for (char c : t) {
            m[c]--;
        }

        for(auto&p : m){
            if(p.second != 0){
                return false;
            }
        }
        return true;
    }
};