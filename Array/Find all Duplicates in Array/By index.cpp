// Method - Index(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        // initializing the duplicateNum variable
        vector<int> duplicateNum;
        
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.size(); i++){
            
            // getting the absolute value of the n"i-th" element
            int n = abs(nums[i]);
            
            // if the absolure value of the "i-th" element is postive, then convert it to negative
            if (nums[n-1] >= 0){
                nums[n-1] = -1 * nums[n-1];
            }
            
            // if the absolure value of the "i-th" element is negative, 
            // then add the "n" value to the duplistNum
            else{
                duplicateNum.push_back(n);
            }
        }
        
        // return duplicate values in the given array
        return duplicateNum;
    }
};
