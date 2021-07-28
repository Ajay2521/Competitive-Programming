// Method - Boyer - Moore Voting Algorithm
// Time Complexity T - O(n), since loop runs "n"
// Space Complexity S - O(1), No extra space

class Solution {
    public int majorityElement(int[] nums) {
        
        
        // initialise the result as the "0" and count to 0
        int result = nums[0];
        int count = 0;
        
        // loop runs for 0 to n-1
        for(int i = 0; i < nums.length; i++){
           
           // if the count is "0", then
           // assign the element to the result 
           if (count == 0) {
               
               result = nums[i];
               
            } 
            
            // ensure that the current element is same as result
            // if so the increment the count by count + 1;
            // else decrement the coubt by count - 1;
            count += (result == nums[i]) ? 1 : -1;
        }
        
        return result;
    }
}
