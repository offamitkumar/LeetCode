class FindSumPairs {
    map<int,int>n1,n2;
    vector<int>v;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->v = nums2;
        for(auto&itr:nums1) {
            n1[itr]++;
        }
        for(auto&itr:nums2) {
            n2[itr]++;
        }
    }
    void add(int index, int val) {
        n2[v[index]]--;
        v[index]+=val; 
        n2[v[index]]++;
    }
    
    int count(int tot) {
        int counter{};
        for (auto&itr:n1) {
            counter+= (itr.second * n2[tot-itr.first]);
        }
        return counter;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
