/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

// Optimised - Recursion or Binary Tree or Divide and Conquer
// Time Complexity T - O(n)
// Space Complexity S - O(1)


class Solution {
    
    // recursive function to create BST tree
    public TreeNode buildBST(int [] nums,int startElement,int endElement){
        
        // base condition
        // ensure the start is not greater than end
        // if so, return null
        if(startElement > endElement){
            return null;
        }    
        
        // calculating the "midElement" of the given array
        int midElement = (startElement + endElement) / 2;
        
        // creating a Binary Search Tree - bst
        // by calling the recursion function (mid, left, right)
        TreeNode bst = new TreeNode(nums[midElement]);
        
        bst.left = buildBST(nums, startElement, midElement-1);
        
        bst.right = buildBST(nums, midElement+1,endElement);
        
        return bst;
    }
    
    public TreeNode sortedArrayToBST(int[] nums) {
        
        // calling recursion function
        return buildBST(nums, 0, nums.length - 1);
    }
}
