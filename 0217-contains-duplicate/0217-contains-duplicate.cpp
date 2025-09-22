// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i] == nums[j]){
//                     return true;
//                     break;
//                 }
//             }
//         }
//         return false;
//     }
// };


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
           
//                 if(nums[i] == nums[i+1]){
//                     return true;
//                     break;
//                 }
//             }
//         return false;
//     }
// };
#include <unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> ans;
        for(int i=0;i<nums.size();i++){
           
                if(ans.count(nums[i])){
                    return true;
                    break;
                }else{
                    ans.insert(nums[i]);
                }
            }
        return false;
    }
};


