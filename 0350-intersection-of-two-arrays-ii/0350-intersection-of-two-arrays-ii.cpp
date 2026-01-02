class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        for(int i =0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
vector<int> ans;
        for(int a : nums2){
            if(m.find(a)!=m.end() && m[a]>0){
                ans.push_back(a);
                m[a]--;
            }
        }
        return ans;
    }
};