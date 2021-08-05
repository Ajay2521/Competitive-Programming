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
    // recursive function to create BST tree
    TreeNode* buildBST(vector<int>& nums,int startElement,int endElement){
        
        // base condition
        // ensure the start is not greater than end
        // if so, return null
        if(startElement > endElement){
            return NULL;
        }    
        
        // calculating the "midElement" of the given array
        int midElement = (startElement + endElement) / 2;
        
        // creating a Binary Search Tree - bst
        // by calling the recursion function (mid, left, right)
        TreeNode* bst = new TreeNode(nums[midElement]);
        
        bst->left = buildBST(nums, startElement, midElement-1);
        
        bst->right = buildBST(nums, midElement+1,endElement);
        
        return bst;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return buildBST(nums, 0, nums.size()-1);
    }
};
