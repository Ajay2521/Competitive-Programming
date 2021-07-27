// Method - HashMap(optimised)
// Time complexity T - O(n)
// Space complexity S - O(n) 

class Solution {
    public int findPairs(int[] nums, int k) {
        
        // inisalize the count variable for counting the possible pairs
        int count = 0;
        
        // creating the frequency hash map so store the frequency of the number in a array
        Map<Integer, Integer> map = new HashMap<>();
        
        // loops run for nums value
        // i used to have the values of nums
        for (int i : nums) {
            
            // inserting the key : value as nums: number of occurence
            map.put(i, map.getOrDefault(i, 0) + 1);
        }
        
        // creating another map and running it for all the set values of previous map
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            
            // if k value is 0, then
            if (k == 0) {
                
                //count number of elements in the array, appear more than or equal twice.
                if (entry.getValue() >= 2) {
                    count++;
                } 
                
            } 
            // if K is not equal to 0
            else {
                
                // then search for key + k in the map
                if (map.containsKey(entry.getKey() + k)) {
                    count++;
                }
            }
        }
        
        // return the result
        return count; 
    }
}
