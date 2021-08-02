// Method - Hashset(BruteForce)
// Time Complexity T - O(n)
// Space Complexity S - O(n)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       // creating a hash set to store the unique values
       set<int, greater<int>> sets;
        
        // loop runs for "0" to "n-1" times
        for(int i=0; i < nums.size(); i++)
        {
            
            // if "i" th value is 0, skip the iteration
            if(nums[i]<=0){
                continue;
            }
            
            // adding the values to the set
            sets.insert(nums[i]);
            
        }  
        
        // result variable to store the missing value
        int result = 1;
        
        // loop runs for 1 to "n" times
        for(int i = 1; i <= sets.size(); i++)
        {
            // ensure the "i"th element is present in the set
            // if not found, return the index
            if(sets.find(i) == sets.end()){
                return i;
            }
            // incrementing the result is "i" is found in the set
            result++;
        }
        return result;  
    }
};
