// Method - Set(BruteForce)
// Time Complexity T - O(n)
// Space Complexity  S - O(1) 


class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        
        // initializing the missingNum variable
        List<Integer> missingNum = new ArrayList<>();
        
        // initializing the number varibale which makes copy of unique values from the nums
        Set<Integer> numbers = new HashSet<>();
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.length; i++){
            // adding the unique number to the set
            numbers.add(nums[i]);
        }
        
        // looping through the array "1" to "n"
        for(int i = 1; i <= nums.length; i++){
        
            // check the presence of "i" in the set
            // if "i" is present in the set, ignore
            // if "i" is not present in the set, 
            // then insert the "i" in the missingNum
            if(!numbers.contains(i)){
                missingNum.add(i);    
            }
        }
        
        // return the mising numbers        
        return missingNum;
    }
}
