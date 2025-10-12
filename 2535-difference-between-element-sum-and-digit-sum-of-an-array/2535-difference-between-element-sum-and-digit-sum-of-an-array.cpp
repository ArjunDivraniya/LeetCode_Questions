class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
         long int digitsum=0;
        for(int s:nums){
            elesum+=s;
            int x=s;
            while(x>0){
                 digitsum+=x%10;
                x/=10;
            }
        }
        return abs(elesum - digitsum);

    }
};