class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int> pos;
     vector<int> neg;

     for(int num : nums){
        if(num>=0){
            pos.push_back(num);
        }else{
            neg.push_back(num);
        }
     }
     vector<int> result;
     int i= 0;
     int j=0;
     while(i<pos.size() && j <neg.size()){

     
     result.push_back(pos[i++]);
     result.push_back(neg[j++]);
     }
     while(i<pos.size())result.push_back(pos[i++]);
     while(j<neg.size())result.push_back(neg[j++]);

     return result;

    }
};