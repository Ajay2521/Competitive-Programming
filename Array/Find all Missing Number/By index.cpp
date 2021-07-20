// Method - Index(Optimised)
// Time Complexity T - O(n)
// Space Complexity  S - O(1) 

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
              
        // initializing the missingNum variable
        vector<int> missingNum;
        
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.size(); i++){
            
            // getting the absolute value of the n"i-th" element
            int n = abs(nums[i]);
            
            // if the absolure value of the "i-th" element is negative, ignore it
            // if the absolure value of the "i-th" element is postive, then convert it to negative
            if (nums[n-1] > 0){
                
                nums[n-1] = -1 * nums[n-1];
            }
        }
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.size(); i++){
            
            // if nums have positive number then push that index+1 to the missing numbers
            if (nums[i] > 0){
                missingNum.push_back(i+1);
            }
        }  
        
        // return when no missing values are there in the given array
        return missingNum;
    }
};
