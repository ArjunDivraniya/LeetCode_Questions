class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i =0;
        int j = nums.size()-1;
vector<int> ans(nums.size());
        for(int k=0;k<nums.size();k++){
            if(nums[k]%2 == 0){
                ans[i++] = nums[k];
            }else{
                ans[j--] = nums[k];
            }
        }

        return ans;
    }
};