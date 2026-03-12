class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i =0;
        int j= n-1;
        int p =n-1;

        while(i<=j){
            if(abs(nums[i]) > abs(nums[j])){
                res[p] = nums[i]*nums[i];
                i++;
            }else{
                res[p] = nums[j]*nums[j];
                j--;
            }
p--;
        }
        return res;
    }
};