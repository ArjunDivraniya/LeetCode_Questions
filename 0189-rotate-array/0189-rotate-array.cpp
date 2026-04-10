class Solution {
public:
void reversearr(vector<int>& nums,int s ,int e){
    while(s<e){
swap(nums[s] ,nums[e]);
s++;
e--;
    }
}

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(nums.size()- 1 <1 || k == 0)return;
        reversearr(nums , 0 ,nums.size()-1);
        reversearr(nums , 0 , k-1);
       reversearr(nums , k ,nums.size()-1);
       
    }
};