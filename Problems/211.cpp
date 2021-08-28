class WordDictionary {
    class Node{
        public:
            bool isEnd;
            Node* character[26];
            Node(){
                isEnd = false;
                for(auto i=0;i<26;++i){
                    character[i] = nullptr;
                }
            }
    };
    Node*root;
    void addWord(string &word , Node*root){
        Node* temp = root;
        for(auto&currentCharacter:word){
            int currentIndex = currentCharacter - 'a';
            if(root -> character[ currentIndex ] == nullptr){ // make a new node 
                root -> character[ currentIndex ] = new Node();
            }
            root = root -> character[ currentIndex ]; 
        }
        root -> isEnd = true;
        root = temp;
    }
    bool search(const string &word ,const size_t& wordSize, int currentIndex , Node* root){
        if(currentIndex == wordSize){
            return root -> isEnd;
        }
        bool isWordPresent = false; 
        if(word[ currentIndex ] == '.'){ // traverse all possible character present 
            for(int index=0; index<26 and false == isWordPresent; ++index){
                if(root -> character[ index ] != nullptr){
                    isWordPresent = search(word , wordSize , currentIndex+1 , root->character[ index ]);
                }
            }
        }else{
            int characterIndex = word[ currentIndex ] - 'a';
            if(root -> character[ characterIndex ] == nullptr){
                isWordPresent = false;
            }else{
                isWordPresent = search(word , wordSize , currentIndex+1 , root->character[ characterIndex ]);
            }
        }
        return isWordPresent;
    }
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        root = new Node();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        addWord(word , root);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return search(word , word.size() , 0 , root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
