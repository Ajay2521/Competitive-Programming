// Optimised - Hashmap
// Time Complexity T = O(n), Hashmap runs for "n" time
// Space Complexity S = O(1), Hashmap take an extra space of "n"

class Solution {
    public int[] twoSum(int[] nums, int target) {
        // hashMap used to hash 2 integers, just like python dictionary, Key-value pair
        HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
        
        // looping through all the values in the array from 0 to "n-1"
        for(int i = 0; i<(nums.length); i++){
            
            // getting difference from target and "i-th" value
            int difference = target - nums[i];
            
            // if the difference is already in the hashMap 
            // then return the map value and current "i-th value"  
            if(hashMap.containsKey(difference)){
                    return new int[] {hashMap.get(difference), i};
            }
            
            // if the difference is not present in the hashMap
            // add the "i-th" value and its index to the hashMap as Key-Value
            else{
                hashMap.put(nums[i],i);
            }
        }
        // if no matching pairs return list as 0
        return new int[] {0,0};
    }
}
