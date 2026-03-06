class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int i=0;
        int j = nums.size()-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(target == nums[mid]){
                return true;
            }
            if(target<nums[mid]){
                j= mid -1;
            }else{
                i = mid +1;
            }
        }
        return false;
        
    }
};