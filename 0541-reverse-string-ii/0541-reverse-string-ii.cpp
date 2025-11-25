class Solution {
public:
string reverse(int start ,int end ,string str){
           
            while(start<=end){
                swap(str[start],str[end]);
                start++;
                end--;
            }
            return str;
        }
    string reverseStr(string s, int k) {
        int n =s.size();
        if(k == n ) return reverse(0,n-1,s);
       
        int i =0;
        
        while(i<n){
            int j = min(i+k-1 ,n-1);
            s = reverse(i,j,s);
            i+=2*k;
           
        }
return s;
    }
};