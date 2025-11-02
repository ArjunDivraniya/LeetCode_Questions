class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n =nums.size();
        int sum =n*(n+1)/2;
        int arrsum=0;
        for(int j=0;j<nums.size();j++){
            arrsum+=nums[j];
        }
        return sum - arrsum;
    }
};