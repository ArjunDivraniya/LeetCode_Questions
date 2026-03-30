class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans =0;
        stack<int> s;
        s.push(0);
        for(int i =0;i<nums.size();i++){
            while(!s.empty() && nums[s.top()] > nums[i]){
                s.push(i);
            }

        }
        for(int i = nums.size() -1;i>=0;i--){
            
            while(!s.empty() && nums[s.top()] <= nums[i]){
                int temp = i - s.top();
                s.pop();
                ans = max(ans ,  temp);
            }

        }
        return ans;
    }
};