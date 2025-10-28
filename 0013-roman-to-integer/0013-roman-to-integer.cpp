class Solution {
public:
    int value(char r) {
        if (r == 'I')
            return 1;
        if (r == 'V')
            return 5;
        if (r == 'X')
            return 10;
        if (r == 'L')
            return 50;
        if (r == 'C')
            return 100;
        if (r == 'D')
            return 500;
        if (r == 'M')
            return 1000;
        return -1;
    }
    int ans = 0;
    int romanToInt(string s) {

        for (int i = 0; i < s.length(); i++) {
            int first = value(s[i]);
            if (i + 1 < s.length()) {
                int second = value(s[i+1]);
                if(second > first){
                    ans += (second - first);
                    i++;
                }else{
                    ans += first;
                }
            }else{
                ans += first;
            }
        }
        return ans;
    }
};