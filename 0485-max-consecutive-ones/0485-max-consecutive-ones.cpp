class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int i=0;
     int count=0;
     int newcount=0;
     while(i<nums.size()){
        if(nums[i]==1){
            newcount++;
            if(count<newcount){
                count=newcount;
            }
        }else{
            newcount=0;
        }
        i++;
     }
     return count;
    }
};