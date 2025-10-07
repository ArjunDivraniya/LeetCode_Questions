class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(coins<costs[i]){
                break;
            }
            coins=coins-costs[i];
            count++;
            if(coins==0){
                return count;
            }
        }
        return count;
    }
};