class CombinationIterator {
    int index; 
    vector<string>re; 
    void gen(string characters, int combinationLength, string cur="", int len = 0, int ind=0) {
        if (cur.size()==combinationLength ) {
            re.push_back(cur); 
            return ;
        }
        if (cur.size() > combinationLength) return ;
        for (int i = ind; i<characters.size(); ++i) {
            cur.push_back(characters[i]); 
            gen(characters, combinationLength, cur, len+1, i+1);
            cur.pop_back(); 
        }
    }
public:
    CombinationIterator(string characters, int combinationLength) {
        index = 0; 
        gen(characters, combinationLength);  
        sort(re.begin(),re.end()); 
    }
    
    string next() {
        return re[index++]; 
    }
    
    bool hasNext() {
        return index<re.size(); 
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
