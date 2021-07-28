// Method - Hashmap
// Time Complexity T - O(n), since loop runs "n"
// Space Complexity S - O(n), Hashmap take extra space "n"

class Solution {
    public int majorityElement(int[] nums) {
        
        // Create a hashmap to store the occureance of a eleemnt in the array
        Map<Integer, Integer> map = new HashMap<Integer, Integer>(); 
        
        // initialise the result as the first element of an array and element count to 0
        int result = nums[0];
        int majorityCount = 0;
        
        // loop runs for 0 to n-1
        for(int i = 0; i < nums.length; i++){
           
           // if the map contains the element "i", then
           if (map.containsKey(nums[i])) {
               
               // get the value of an element in the map and 
               // ensure the maximum value of element 
               majorityCount = Math.max(majorityCount, map.get(nums[i]));
               
               // increment the value of an element in the map by 1 
               map.put(nums[i], map.get(nums[i]) + 1);
               
               // if the value of an element is more than the MajorityCount
               // then assign that element to the result variable
               if (map.get(nums[i]) > majorityCount)
                    result = nums[i];
            } 
            // if the element is not present in the map
            // then add the element into map with value as 1
            else {
                map.put(nums[i], 1);
            }
        }
        
        return result;
    }
}
