class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
    int size=arr.size();
    int up=0;
    int down=0;
    if(size<3)return false;
int i=0;
    while(i+1 <size && arr[i]<arr[i+1]){
        up++;
        i++;
    }
    if(up==0 || up==size-1)return false;
    while(i+1 <size && arr[i]>arr[i+1]){
down++;
i++;
} 
 return (i==size-1 && up>0 && down >0);
  }
};