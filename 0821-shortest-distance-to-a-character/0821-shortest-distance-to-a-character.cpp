class Solution {
public:
   int findCharIndex(const string& s, int start, char target) {
    for (int i = start; i < s.size(); i++) {
        if (s[i] == target) {
            
            return abs(i - start);
        }
    }
    return INT_MAX;
}
int leftDistance(const string& s, int index, char c) {
    for (int i = index; i >= 0; i--) {
        if (s[i] == c) return abs(index - i);
    }
    return INT_MAX; 
}

    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        
        for (int i = 0; i < s.size(); i++) {
            
          int tr = min(findCharIndex(s , i , c), leftDistance(s, i  ,c));

        ans.push_back(tr);
            } 
                
            
            
        
        return ans;
    }
};