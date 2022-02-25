class Solution {
    long long get(long long index, vector<long long>&btree) {
        long long n = btree.size(); 
        n--; 
        index++; 
        long long ans{}; 
        while (index>0){
            ans += btree[index]; 
            index-=index&-index; 
        }
        return ans; 
    }
    void update(long long index, vector<long long>&btree) {
        long long n = btree.size(); 
        n--; 
        ++index; 
        while (index<=n) {
            btree[index]+=1; 
            index += index & -index; 
        }
    }
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        const int&n = nums1.size(); 
        vector<int>pos(n); 
        for (int i=0; i<n; ++i) {
            pos[nums2[i]] = i; 
        }
        vector<long long>pref(n), suff(n); 
        vector<long long>b_p(n+1), b_s(n+1); 
        for (int i=0; i<n; ++i) {
            int cp = pos[nums1[i]]; 
            pref[i] = get(cp, b_p); 
            update(cp, b_p); 
        }
        for (int i=n-1; i>=0; --i) {
            long long cp = pos[nums1[i]]; 
            suff[i] = n-i-1 - get(cp, b_s); 
            update(cp, b_s);
        }
        long long counter{}; 
        for (int i=1; i<n-1; ++i) {
            counter += (pref[i] * suff[i]); 
        }
        return counter; 
    }
};
