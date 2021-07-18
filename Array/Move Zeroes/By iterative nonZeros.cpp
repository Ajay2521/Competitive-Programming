// Method - Iterating nonZeroes and Zeroes(BruteForce)
// Time Complexity T - O(n)
// Space Complexity S - O(n)


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
        // initializing the variable "nonZeroCount" for counting the nonZero elements and moving forward
        int nonZeroCount = 0;
        
        // If the current element is not 0, then we need to
        // append it just in front of last non 0 element we found.
        // loop run through 0 to "nums-1" element for nonZero elements
        for(int i = 0; i < nums.size(); i++){
            
            // if nonZero element is found
            // move the nonZero element forward
            if (nums[i] !=  0){
                nums[nonZeroCount] = nums[i];
                // incrementing the nonZeroCount
                nonZeroCount++;
            }
        }
        
        // after forwarding all the nonZero elements to the beginning of an array.
        // fill the remaining element of an array with the vlaue of "0's"
        // loop will be runing from nonZeroCount to "nums-1" elements
        for(int i = nonZeroCount; i<nums.size(); i++){
            nums[i] = 0;
        }
    }

};
