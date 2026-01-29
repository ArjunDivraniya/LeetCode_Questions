class Solution {
public:
    string defangIPaddr(string address) {
        string out = "";
        for(char ch : address){
          if(ch == '.'){
            out+= "[.]";
          }else{
            out+=ch;
          }

        }
        return out;
    }
};