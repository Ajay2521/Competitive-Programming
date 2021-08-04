// Brute Force - Iteration
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // "duplicateCount" is used to count the duplicates in the array "nums"
        int duplicateCount=0;
        
        // the loop runs from "1" to "n-1" times 
        for(int i = 1; i < nums.size(); i++){
            
            // Note: array "nums" is in reverse order. 
            // It is advice to check current element is equal to previous element or not
            // if the value of nums[i] is same as the value of previous element
            // then increment the count
            if(nums[i] == nums[i-1]){
                duplicateCount++;
            }
            
            // if the current element is not same as the previous element
            // then remove the previous element (duplicate element)
            else{
                nums[i-duplicateCount]=nums[i];
            }
        }
        
        // return K , Where K is the size of array with unique values
        return nums.size()-duplicateCount;
    }
};
