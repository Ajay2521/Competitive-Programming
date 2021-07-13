// Method = Reverse
// Time Complexity T = O(n)
// Space Complexity T = O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // if "k" is greater than nums, then "k" is remainder of k mod n  
        k = k % nums.size();
        
        // reversing the entier array from 0 to n-1
        reverse(nums, 0, nums.size() - 1);
        
        // reversing the array from 0 to k - 1, which is from beginning to "k-1"th element
        reverse(nums, 0, k - 1);
        
        // reversing the array from k to n - 1, which is from "k" element to "n-1"th element
        reverse(nums, k, nums.size() - 1);
        
    }
    
    void reverse(vector<int>& nums, int start, int end){
        
        // run till start is greater than end
        while(start < end){
            
            // storing the start value to temp variable
            int temp = nums[start];
            
            // assigning the end value to the start
            nums[start] =  nums[end];
            
            // assigning the temp value to the end
            nums[end] = temp;
            
            // increment the start and decrement the end
            start++;
            end--;
        }
    }
    
};
