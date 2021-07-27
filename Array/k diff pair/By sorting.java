// Method - Sorting(Brute Force)
// Time complexity T - O(n log n)
// Space complexity S - O(1) 

class Solution {
    public int findPairs(int[] nums, int k) {
        
        // inisalize the count variable for counting the possible pairs
        int count = 0;
        
        // sorting the array
        Arrays.sort(nums);
        
        // looping through 0 to n-1 element
        for(int i = 0; i < nums.length; i++){
            
            // skipping up the dulicates in the vector
            if ((i > 0) && (nums[i] == nums[i - 1])){
                continue;  
            } 
            
            // inner loop runs for i+1 to n-1 time
            // till the pair is found
            for (int j = i + 1; j < nums.length; ++ j) {
                
                // checking "i-th" - "j-th"  == K
                // if so increment the count and break the loop
                if (nums[j] - nums[i] == k) {
                    count ++;
                    break;
                }
            }
        }
        // return the result
        return count; 
    }
}
