class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> result(n);
        // int n =nums.size();
        int pro = 1;
result[0] = 1;
        for(int i =1 ;i < n ;i++){
            pro =pro*nums[i-1];
result[i] = pro;
        }
        pro = nums[n-1];
    
        for(int i = n-2;i>=0;i--){
result[i]= result[i]*pro;
pro = pro * nums[i];
        }
        return result;
    }
};