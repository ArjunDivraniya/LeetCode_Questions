class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            int j =i+1;
            while(j<nums.size()){
                if(nums[i] +nums[j]<target){
                    count++;
                   
                }
                 j++;
            }
        }
        return count;
    }
};