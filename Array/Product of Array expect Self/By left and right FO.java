// Method - Left and Right(Future Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        // inisalize the product array with size of nums
        int[] prod = new int[nums.length];
        
        // setting up the default value
        int left = 1;
        int right = 1;
        
        
        // getting product all the left values 
        for (int i = 0; i< nums.length; i++){
            prod[i] = left;
            left = left * nums[i];
        }
        
        // getting product all the right values
        for (int i = nums.length-1; i >= 0 ; i--){
            prod[i] = prod[i] * right;
            right = right * nums[i];
        }
        
        return prod;
    }
}
