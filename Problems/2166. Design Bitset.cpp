class Bitset {
    vector<string>bit; 
    int on, sz; 
    int f; 
public:
    Bitset(int size) {
        bit.resize(2); 
        sz = size; 
        on = 0; 
        f = 0; 
        bit[0] = string(size, '0'); 
        bit[1] = string(size, '1'); 
    }
    
    void fix(int idx) {
        if (bit[f][idx] != '1') {
            bit[f][idx] = '1'; 
            on++; 
            bit[!f][idx] = '0'; 
        }
    }
    
    void unfix(int idx) {
        if (bit[f][idx] !='0') {
            bit[f][idx] = '0'; 
            on--; 
            bit[!f][idx]='1'; 
        }
    }
    
    void flip() {
        f ^=1; 
        on = sz-on;
    }
    
    bool all() {
        return on == sz; 
    }
    
    bool one() {
        return on >= 1; 
    }
    
    int count() {
        return on; 
    }
    
    string toString() {
        return bit[f]; 
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */
