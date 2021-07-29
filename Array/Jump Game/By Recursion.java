// Method - Greddy(Optimised)
// Time Complexity T - O(n), loop run for "n" time
// Space Complexity S - O(1), COnstant space


class Solution {
    
    public boolean recursionPass(int[] nums, int position) {

        // if the postion is equal to n-1
        // then return true
        if (position == nums.length - 1) {
            return true;
        }

        // getting the furthestJump by the min value
        int furthestJump = Math.min(position + nums[position], nums.length - 1);
        
        // loop runs for i to furthestJump        
        for (int nextPosition = position + 1; nextPosition <= furthestJump; nextPosition++) {
            
            // recursion case
            if (recursionPass(nums, nextPosition) == true) {
                return true;
            }
        }
        
        return false;
    }
    
    public boolean canJump(int[] nums) {
        
        // calling the recursion function
        return recursionPass(nums, 0);
    }
}
