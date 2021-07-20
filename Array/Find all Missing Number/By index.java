// Method - Index(Optimised)
// Time Complexity T - O(n)
// Space Complexity  S - O(1) 


class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        
        // initializing the missingNum variable
        List<Integer> missingNum = new ArrayList<>();
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.length; i++){
            
            // getting the absolute value of the n"i-th" element
            int n = Math.abs(nums[i]);
            
            // if the absolure value of the "i-th" element is negative, ignore it
            // if the absolure value of the "i-th" element is postive, then convert it to negative
            if (nums[n-1] > 0){
                
                nums[n-1] = -1 * nums[n-1];
            }
        }
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.length; i++){
            
            // if nums have positive number then push that index+1 to the missing numbers
            if (nums[i] > 0){
                missingNum.add(i+1);
            }
        }  
        
        // return the mising numbers        
        return missingNum;
    }
}
