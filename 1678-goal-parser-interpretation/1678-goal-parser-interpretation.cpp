class Solution {
public:
    string interpret(string command) {
        string out = "";
        for(int i =0 ;i < command.size();i++){
            
if(command[i] == '(' && command[i+1] == ')'){
    out+='o';
i++;
}
if(command[i] == '(' && command[i+1] == 'a'){
    out+="al";
    i+=2;
}

if(command[i] == 'G'){
    out+='G';
}

        }
        return out;
    }
};