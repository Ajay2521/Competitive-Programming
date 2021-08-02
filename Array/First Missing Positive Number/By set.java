// Method - Hashset(BruteForce)
// Time Complexity T - O(n)
// Space Complexity S - O(n)

class Solution {
    public int firstMissingPositive(int[] nums) {
        
        // creating a hash set to store the unique values
        HashSet<Integer> set=new HashSet<>();
        
        // loop runs for "0" to "n-1" times
        for(int i=0; i < nums.length; i++)
        {
            
            // if "i" th value is 0, skip the iteration
            if(nums[i]<=0){
                continue;
            }
            
            // adding the values to the set
            set.add(nums[i]);
            
        }  
        
        // result variable to store the missing value
        int result = 1;
        
        // loop runs for 1 to "n" times
        for(int i = 1; i <= set.size(); i++)
        {
            // ensure the "i"th element is present in the set
            // if not found, return the index
            if(!set.contains(i)){
                return i;
            }
            // incrementing the result is "i" is found in the set
            result++;
        }
        return result;
    }
}
