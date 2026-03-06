class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size() == 1)return true;
int count=0;
        for(int i =1;i<s.size();i++){
            if(s[i-1] == '0' && s[i] == '1' )return false;
{

}
            }
        return true;
    }
};