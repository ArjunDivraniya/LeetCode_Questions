class Solution {
public:
    int specialArray(vector<int>& nums) {

        int X = 0;
        while (X <= nums.size()) {
            int count = 0;
            for (int i = 0; i < nums.size(); i++) {

                if (nums[i] >= X) {
                    count++;
                }
            }
            if (count == X)
                return X;
            X++;
        }

        return -1;
    }
};