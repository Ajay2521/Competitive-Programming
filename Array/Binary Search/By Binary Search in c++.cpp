class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // initialising the left and right element of an array
        int left = 0;
        int right = nums.size() - 1;
        
        // looping runs from 0 to n-1 time,  till the target is found
        while (left <= right){
            
            // finding the middle element of an array
            int mid = (left + right) / 2;
    
            // matching the "mid" element value with the target
            if (nums[mid] == target){
    
                // return the index, if the match is found
                return mid;            
            
            }
            
            // if the target value is less than the "mid" element value
            else if(nums[mid] < target){
        
                // assign the "mid+1" element to the left, for futher iteration
                left = mid + 1;
            
            }
        
            // if the target value is greater than the "mid" element value
            else{
            
                // assign the "mid-1" element to the right, for futher iteration
                right = mid - 1;
            
            }
    
        }
        
        //if match not found return -1;
        return -1;
            
    }
        
};
