// Method - Index(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)


class Solution {
    public List<Integer> findDuplicates(int[] nums) {
   
        // initialise the variable duplicateNum
        List<Integer> duplicateNum = new ArrayList<>();
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.length; i++){
            
            // getting the absolute value of the n"i-th" element
            int n = Math.abs(nums[i]);
            
            // if the absolure value of the "i-th" element is postive, then convert it to negative
            if (nums[n-1] >= 0){
                nums[n-1] = -1 * nums[n-1];
            }
            
            // if the absolure value of the "i-th" element is negative, 
            // then add the "n" value to the duplistNum
            else{
                duplicateNum.add(n);
            }
        }
        
        // return duplicate values in the given array
        return duplicateNum;
   
    }
}
