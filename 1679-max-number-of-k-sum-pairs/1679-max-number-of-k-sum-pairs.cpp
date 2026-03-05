class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int rem = k - nums[i];
            if(m[rem] > 0){
                count++;
                m[rem]--;
            }else{
                m[nums[i]]++;
                            }
        }
        return count;
    }
};