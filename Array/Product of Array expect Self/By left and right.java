// Method - Left and Right(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(n)

class Solution {
    public int[] productExceptSelf(int[] nums) {
        // inisialize the tw varible as left and right
        int[] left = new int[nums.length];
        int[] right = new int[nums.length];
        
        // setting up the default value
        left[0] = 1;
        right[nums.length-1] = 1;
        
        
        // getting product all the left values from the current index
        for (int i = 1; i< nums.length; i++){
            left[i] = left[i - 1] * nums[i - 1];
        }
        
        // getting product all the right values from the current index
        for (int i = nums.length-2; i >= 0 ; i--){
            right[i] = right[i + 1] * nums[i + 1];
        }
        
        // calcluating the product of left and right
        for (int i = 0; i< nums.length; i++){
            nums[i] = left[i] * right[i];
        }
        
        return nums;
    }
}
