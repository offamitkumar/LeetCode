#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
           return findMedianSortedArrays(nums2 ,  nums1);
        }
        int arrayOneSize = static_cast<int>(nums1.size());
        int arrayTwoSize = static_cast<int>(nums2.size());
        if(!arrayTwoSize){
            int midIndex = (arrayOneSize-1)/2;
            if(!(arrayOneSize&1)){
                return static_cast<double>( ( nums1[ midIndex ] + nums1[ midIndex+1 ] ) /2.0f );
            }else{
                return static_cast<double>( nums1[ midIndex ] );
            }
        }else if(!arrayOneSize){
            int midIndex = (arrayTwoSize-1)/2;
            if(!(arrayTwoSize&1)){
                return static_cast<double>( ( nums2[ midIndex ] + nums2[ midIndex+1 ] ) /2.0f );
            }else{
                return static_cast<double>( nums2[ midIndex ] );
            }
        }
        if(arrayTwoSize == 0 and arrayTwoSize == 0){
            return 0.0;
        }
        int first = 0 , last = arrayOneSize;
        while( first <= last ) {
            int arrayOnePartitionSize = (first + last) / 2; 
            int arrayTwoPartitionSize = (arrayOneSize + arrayTwoSize + 1) /2 - arrayOnePartitionSize; // +1 for managing odd & even length array 

            int arrayOneLeftValue = (arrayOnePartitionSize == 0) ? numeric_limits<int>::min() : nums1[ arrayOnePartitionSize - 1 ]; 
            int arrayOneRightValue = (arrayOnePartitionSize == arrayOneSize) ? numeric_limits<int>::max() : nums1[ arrayOnePartitionSize ];
            int arrayTwoLeftValue = (arrayTwoPartitionSize == 0) ? numeric_limits<int>::min() : nums2[ arrayTwoPartitionSize - 1 ];
            int arrayTwoRightValue = (arrayTwoPartitionSize == arrayTwoSize) ? numeric_limits<int>::max() : nums2[ arrayTwoPartitionSize ];

            if( arrayOneLeftValue <= arrayTwoRightValue and arrayOneRightValue>=arrayTwoLeftValue ){
                if((arrayOneSize + arrayTwoSize)&1){
                    return static_cast<double>(std::max(arrayOneLeftValue , arrayTwoLeftValue));
                }else{
                    return static_cast<double>(max(arrayOneLeftValue , arrayTwoLeftValue) + min(arrayOneRightValue , arrayTwoRightValue))/2.0f;
                }
            }else if(arrayOneLeftValue > arrayTwoRightValue){
                last = arrayOnePartitionSize - 1;
            }else{
                first = arrayOnePartitionSize + 1;
            }
        }
        return 0;
    }
};
int main(void){
    vector<int>v{1};
    vector<int>V{2,3,4,5};
    Solution s1;
    cout<<fixed<<setprecision(2)<<s1.findMedianSortedArrays(v,V)<<'\n';
    return 0;
}
