// Method - Concatenate and sort(BruteForce)
// Time complexity T = O(K log K), where K = m + n , m = size of nums1, n = size of nums2
// Space Complexity S = O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // concatenating the nums2 value to nums1 array
        for(int i = 0 ; i < n ; i++){
            nums1[i + m] = nums2[i];
        }
        
        // sorting the nums1 array
        sort(nums1.begin(), nums1.end());        
    }
};
