class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0;
        int index =0;
        while(i<chars.size()){
            char s = chars[i];
            int count =0;
            while(i<chars.size() && chars[i] == s){
                i++;
                count++;
            }
            chars[index++] = s;
            if(count > 1){
            string co = to_string(count);
           for(char ch : co){
chars[index++] = ch;
           }
        }
        }
        return index;
    }

};