
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
#include<iostream>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        nums1.resize(m);
        nums2.resize(n);
        
        for(int i=0;i<n;i++){
            
            nums1.push_back(nums2[i]);
            sort(nums1.begin(),nums1.end());
            
        }
        
        
        
    }
};