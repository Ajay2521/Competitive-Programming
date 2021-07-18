// Method - Sorting(BruteForce)
// Time Complexity T - O(n log n)
// Space Complexity  S - O(1) 


class Solution {
    public int missingNumber(int[] nums) {
        
        // sorting the array
        Arrays.sort(nums);
            
        // Ensure that "n" is at the last index of an array
        // if not then return the "n"
        if(nums[nums.length - 1] != nums.length){
            return nums.length;
        }
        
        // ensure that "0" is at the first index of an array
        // if not then return "0"
        else if(nums[0] != 0) {
            return 0;
        }
        // finding missing number between 0 to n-1
        else{
            
            // looping through 1 to n-1 element of an array 
            for(int i = 1; i < nums.length; i++){
                
                // accessing the previous value and add up "1" to match with the current value
                int expectedNum = nums[i-1] + 1;
                
                // if the current number is not equal to the expected number
                // then return the expected number as a missing number
                if(nums[i] != expectedNum){
                    return expectedNum;
                }
            }
        }
        // return when no missing values are there in the given array
        return -1;
    }
}
