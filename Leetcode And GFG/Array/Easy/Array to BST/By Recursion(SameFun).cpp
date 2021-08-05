/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Optimised - Recursion or Binary Tree or Divide and Conquer
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        // base condition
        // ensure the array is not an empty array
        // if empty array return null pointer
        if (nums.size() == 0){
            return nullptr;
        }
        
        // calculating the "midElement" of the given array
        int midElement = nums.size() / 2;
        
        // left - the value from beginning of the array to the middle of the array
        auto left = vector<int>(begin(nums), begin(nums) + midElement);
        
        // right - the value from middle+1 of the array to end of the array
        auto right = vector<int>(begin(nums)  + midElement + 1, end(nums));
        
        // creating a Binary Search Tree - bst
        // by calling the recursion function (mid, left, right)
        TreeNode* bst = new TreeNode(nums[midElement],
            sortedArrayToBST(left),
            sortedArrayToBST(right));
        
        return bst;
    }
};
