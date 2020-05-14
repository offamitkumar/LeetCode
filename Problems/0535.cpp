class Solution {
    unordered_map<string , string>dec;
    unordered_map<string , int>enc;
    int index = 0;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        enc[longUrl]=index;
        dec[to_string(index)]= longUrl;
        ++index;
        return to_string(index-1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return dec[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
