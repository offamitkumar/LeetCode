class Solution {
    int max_xor;
    struct TrieNode{
        TrieNode* left; // for 0 
        TrieNode* right;  // for 1 
        TrieNode(): left{nullptr} , right{nullptr}{}
    };
    void update(TrieNode* root , int value){
        TrieNode* temp = root;
        for(int i=31; i>=0; --i){
            bool bit = ((value&(1<<i))!=0);
            if(bit){
                if(temp -> right == nullptr){
                    temp -> right = new TrieNode();
                }
                temp = temp -> right;
            }else{
                if(temp -> left == nullptr){
                    temp -> left = new TrieNode();
                }
                temp = temp -> left;
            }
        }
    }
    void find_max(TrieNode* root , int value){
        TrieNode* temp = root;
        int counter{};
        for(int i=31; i>=0; --i){
            bool bit = ((value&(1<<i))!=0);
            if(bit){
                if(temp -> left != nullptr){
                    counter+=(1<<i);
                    temp = temp -> left;
                }else if(temp -> right != nullptr){
                    temp = temp -> right;
                }else{
                    max_xor = max(max_xor , counter);
                    return ;
                }
            }else{
                if(temp -> right != nullptr){
                    counter+=(1<<i);
                    temp = temp -> right;
                }else if(temp -> left != nullptr){
                    temp = temp -> left;
                }else{
                    max_xor = max(max_xor , counter);
                    return ;
                }
            }
        }
        max_xor = max(max_xor , counter);
    }
public:
    int findMaximumXOR(vector<int>& nums) {
        max_xor= 0;
        TrieNode* root = new TrieNode;
        for(auto&itr:nums){
            update(root, itr);
        }
        for(auto&itr:nums){
            find_max(root, itr);
        }
        return max_xor;
    }
};
