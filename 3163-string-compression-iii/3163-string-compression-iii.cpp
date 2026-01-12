class Solution {
public:
    string compressedString(string & word) {
        int i = 0;
        string comp = "";
        while (i < word.size()) {
            int count = 0;
            char ch = word[i];
            while (ch == word[i]) {

                count++;
                
                i++;
            }
           if (count <= 9) {
                    comp += to_string(count);
                    comp += ch;
                    count = 0;
                }else{
                    int div = count/9;
                    int rem = count%9;
                    while(div > 0){
                        comp += "9";
                        comp += ch;
                        div--;

                    }
                    if(rem != 0 ){
                        comp  += to_string(rem);
                        comp += ch;
                    }
                      
                  count = 0;
                }
        }
        return comp;
    }
};