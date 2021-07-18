// Method - Swap()(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)


class Solution {
    public void moveZeroes(int[] nums) {
        // initializing the variable "nonZeroCount" for counting the nonZero elements and moving forward
        int nonZeroCount = 0;
        
        // If the current element is not 0, then we need to
        // append it just in front of last non 0 element we found.
        // loop run through 0 to "nums-1" element for nonZero elements
        for(int i = 0; i < nums.length; i++){
            
            // if nonZero element is found
            // move the nonZero element forward
            if (nums[i] !=  0){
                // swapping
                int temp = nums[i];
                nums[i] = nums[nonZeroCount];
                nums[nonZeroCount] = temp;
                // incrementing the nonZeroCount
                nonZeroCount++;
            }
        }
    }
}
