// Method - Iterative(BruteForce)
// Time Complexity T - O(n^2), since nested loop runs n^2
// Space Complexity S - O(1), brute force does't take extra sapce

class Solution {
    public int majorityElement(int[] nums) {
        
        // the count of majority element in the given array is greater than n/2
        int majorityElementCount = nums.length/2; 
        
        // loop runs for all the values in nums
        for(int num:nums){
            
            // elementCount is used to count the occurance of an element
            int elementCount = 0;
            
            // loop runs for all the values in nums
            for (int element : nums){
                
                // if i == j, 
                // then increment the count of an element
                if(element == num){
                    elementCount = elementCount + 1;
                }
            }
            
            // the occurence of an element is greater than the majorityElementCount
            // then print the element(number)
            if (elementCount > majorityElementCount){
                return num;
            }
        }
        
        // if there is no element occured more then the majority element count
        // then return -1
        return -1;
    }
}
