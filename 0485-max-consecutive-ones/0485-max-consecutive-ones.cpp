class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int i=0;
      int count =0;
      int inc=0;
while(i<nums.size()){
    if(nums[i]==1){
        inc++;
        if(count<inc){
            count=inc;
        }

    }else{
        inc=0;
    }
    i++;
}
return count;
    }
};