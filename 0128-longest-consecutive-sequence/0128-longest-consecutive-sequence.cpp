class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());

        int len = 0;
        for(int num : s){
            
            if(!s.count(num-1)){
                int curr = num;
                int currlen = 1;

                while(s.count(curr + 1)){
                    currlen++;
                    curr++;
                }
                len = max(len ,currlen);

            }
            
        }
        return len;
    }
};