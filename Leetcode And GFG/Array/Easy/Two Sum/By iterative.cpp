// Brute Force - Iterative
// Time Complexity T = O(n^2), Nested loop runs for n^2 times
// Space Complexity S = O(1), bruteforce doesn't take extra space

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // ans is used to return the index of the obtained result, 
        vector<int> ans;
        
        // looping through all the values in the array from 0 to n-1     
        for(int i=0; i<nums.size(); i++){
        
            // looping through all the values in the array from "i+1" to "n-1"
            for(int j=i+1; j<nums.size(); j++){
            
                // checking whether "i-th" and "j-th" sum with the "target" value 
                if(nums[i]+nums[j]==target){
                    
                    // if sum of "i-th" and "j-th" makes of target
                    // then add the "i-th" and "j-th" index to the answer variable
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
