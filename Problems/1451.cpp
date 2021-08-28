class Solution {
public:
    string arrangeWords(string text) {
        char* token = NULL;
        token = strtok((char*)text.c_str()," ");
        string temp(token);
        temp[0] = char(temp[0]+'a'-'A');
        map<int , vector<string>>table;
        table[temp.size()].emplace_back(temp);
        token = strtok(NULL , " ");
        while(token){
            string temp1(token);
            table[temp1.size()].emplace_back(temp1);
            token = strtok(NULL ," ");
        }
        text = "";
        for(auto &itr:table){
            for(auto &itr1:itr.second){
                text+=itr1;
                text+=" ";
            }
        }
        text.pop_back(); // removing the space;
        text[0] = text[0]-'a'+'A';
        return text;
    }
};
