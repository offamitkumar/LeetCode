class Solution {
    set<string>best; 
    map<string,string>captial, vowel; 
    void make_data(vector<string>&wordlist) {
        for(auto&itr:wordlist) {
            best.insert(itr);

            // capital 
            string a1,a2; 
            for (auto i:itr) {
                a1.push_back(tolower(i));
                if (tolower(i) =='a' || tolower(i)=='e' || tolower(i)=='i' || tolower(i)=='o' || tolower(i)=='u') {
                    a2.push_back('*');
                } else {
                    a2.push_back(tolower(i));
                }
            }
            if (captial.find(a1) == captial.end()) {
                cout << a1  << ": " << itr << '\n'; 
                captial[a1] = itr;
            }
            if (vowel.find(a2) == vowel.end()) {
                vowel[a2] = itr;
            }
        }
    }
    public:
        vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
            make_data(wordlist);
            vector<string>ans;
            for (auto&itr:queries) {
                if (best.find(itr) != best.end()) {
                    ans.push_back(itr);
                    continue;
                }
                string a1,a2; 
                for (auto i:itr) {
                    a1.push_back(tolower(i));
                    if (tolower(i) =='a' || tolower(i)=='e' || tolower(i)=='i' || tolower(i)=='o' || tolower(i)=='u') {
                        a2.push_back('*');
                    } else {
                        a2.push_back(tolower(i));
                    }
                }
                if (captial.find(a1) != captial.end()) {
                    ans.push_back(captial[a1]);
                } else if (vowel.find(a2) != vowel.end()) {
                    ans.push_back(vowel[a2]); 
                } else {
                    ans.push_back("");
                }
            }
            return ans;
        }
};
