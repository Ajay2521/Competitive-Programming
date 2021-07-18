// Method - Swap()(optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
        // initializing the variable "nonZeroCount" for counting the nonZero elements and moving forward
        int nonZeroCount = 0;
        
        // If the current element is not 0, then we need to
        // append it just in front of last non 0 element we found.
        // loop run through 0 to "nums-1" element for nonZero elements
        for(int current = 0; current < nums.size(); current++){
            
            // if nonZero element is found
            // move the nonZero element forward and move zero element backward
            if (nums[current] !=  0){
                swap(nums[nonZeroCount],nums[current]);
                // incrementing the nonZeroCount
                nonZeroCount++;
            }
        }   
    }
};
