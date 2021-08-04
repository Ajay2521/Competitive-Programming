// Optimised - Two Pointer
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
    public int removeDuplicates(int[] nums) {        
        
        // ensure the "nums" array is non empty
        // if empty return 0
        if(nums.length == 0){
            return 0;
        }
        
        // "unique" is incremented for all unique values in an array 
        int unique = 0;
        
        // the loop runs from "1" to "n-1" times 
        for(int i = 1; i < nums.length; i++){
            
            // Note: array "nums" is in reverse order. 
            // It is advice to check current element is equal to previous element or not
            // if the value of nums[i] is not same as the value of previous unique element
            // then increment the "unique" and 
            // remove the duplicate by assigning the value of "i" to "unique"
            if(nums[i] != nums[unique]){
                unique++;
                nums[unique] = nums[i];
            }
            
        }
        
        // return K , Where K is the size of array with unique values
        return unique + 1;
    }
}
