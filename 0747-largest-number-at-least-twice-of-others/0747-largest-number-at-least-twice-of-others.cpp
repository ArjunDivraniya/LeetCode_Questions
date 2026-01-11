class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() == 2) return nums[0] > nums[1] ? 0 : 1;
        int large = -1;
        int seclarge = -1;
        int index = -1;

        for(int i =0;i<nums.size();i++){
            if(nums[i] > large){
                seclarge = large;
                large = nums[i];
                index = i;
            }else if(nums[i] > seclarge){
                seclarge = nums[i];
            }
        }
        
        return (seclarge*2 <= large) ? index : -1;
        
    }
};