class Solution {
    vector<int>m;
    double merge(vector<int>&nums1,vector<int>&nums2){
        int i=0 , j=0 , k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                m[k++] = nums1[i++];
            }else{
                m[k++] = nums2[j++];
            }
        }
        while(i<nums1.size()){
            m[k++] = nums1[i++];
        }
        while(j<nums2.size()){
            m[k++] = nums2[j++];
        }
        if(m.size()&1){
            cout<<m.size()<<endl;
            return double(m[m.size()/2]);
        }else{
            return double(double(m[m.size()/2-1]+m[m.size()/2])/2.0f);
        }
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        m.resize(nums1.size()+nums2.size());
        return merge(nums1,nums2);
    }
};
