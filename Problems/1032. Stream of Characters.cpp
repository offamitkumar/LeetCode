class StreamChecker {
    class Node {
        public:
            bool isEnd; 
            Node* chars[26]; 
            Node() {
                isEnd = false; 
                for (int i=0; i<26; ++i) {
                    chars[i] = nullptr; 
                }
            }
    };
    Node*root; 
    queue<Node*>q; 
    void insert(const string &s) {
        Node*temp = root; 
        for (auto&chr:s) {
            int x = int(chr - 'a');
            if (temp -> chars[x] == nullptr) {
                temp -> chars[x] = new Node(); 
            }
            temp = temp -> chars[x]; 
        }
        temp -> isEnd = true; 
    }
public:
    StreamChecker(vector<string>& words) {
        root = new Node(); 
        for (auto&word: words) {
            insert(word); 
        }
    }
    
    bool query(char letter) {
        int idx = int(letter -'a');
        Node*temp = root; 
        q.push(temp); 
        const int&n = q.size(); 
        bool isEnd = false; 
        for (int i=0; i<n; ++i) {
            Node*current = q.front(); q.pop(); 
            if (current -> chars[idx] != nullptr) {
                current = current-> chars[idx]; 
                if (current->isEnd) {
                    isEnd = true; 
                }
                q.push(current); 
            } 
        }
        return isEnd; 
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
