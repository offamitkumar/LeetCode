class Trie {
    private:
        struct Node{
            Node * arr[26];
            bool isEnd;
            Node(){
                for(int i=0;i<26;++i){
                    arr[i] = nullptr;
                }
                isEnd = false;
            }
        };
        Node * root;
        void insert(string &word , Node*root){
            for(auto&itr:word){
                int index = itr-'a';
                if(root->arr[index]==nullptr){
                    root->arr[index] = new Node();
                }
                root = root->arr[index];
            }
            root -> isEnd = true;
        }
        bool search(string &word , Node* root){
            for(auto&itr:word){
                int index = itr-'a';
                if(root -> arr[index] == nullptr){
                    return false;
                }
                root = root -> arr[index];
            }
            return root -> isEnd;
        }

        bool startsWith(string &word , Node* root){
            for(auto&itr:word){
                int index = itr-'a';
                if(root -> arr[index] == nullptr){
                    return false;
                }
                root = root -> arr[index];
            }
            return true;
        }
    public:
        /** Initialize your data structure here. */
        Trie() {
            root = new Node();
        }

        /** Inserts a word into the trie. */
        void insert(string word) {
            insert(word , root);
        }

        /** Returns if the word is in the trie. */
        bool search(string word) {
             return search(word , root);
        }

        /** Returns if there is any word in the trie that starts with the given prefix. */
        bool startsWith(string prefix) {
            return startsWith(prefix , root);
        }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
