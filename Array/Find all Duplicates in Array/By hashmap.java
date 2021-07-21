// Method - HashMap(Brute Force)
// Time Complexity T - O(n)
// Space Complexity S - O(n)


class Solution {
    public List<Integer> findDuplicates(int[] nums) {
   
        // initialise the variable duplicateNum
        List<Integer> duplicateNum = new ArrayList<>();
        
        // initialise the hashmap to store unique numbers
        Map<Integer, Integer> numbers = new HashMap<>();
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.length; i++){
            
            // if the value of the "i-th" element is not present in the hashMap
            // then insert the value and index to the hashMap
            if (!numbers.containsKey(nums[i])){
                numbers.put(nums[i], i);
            }
            
            // if the value of the "i-th" element is present in the hashMap
            // then insert the value to the duplicateNum
            else{
                duplicateNum.add(nums[i]);
            }
        }
        
        // return duplicate values in the given array
        return duplicateNum;
   
    }
}
