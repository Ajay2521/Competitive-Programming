// Method - Iterative(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       
        // ensure the nums is not empty
        if (nums.size() == 0){
            return 1;
        }    
        
        // loop runs for 0 to n-1 times
        for(int i = 0; i < nums.size();){
            
            // check nums[i] is not greater than size of num
            // or nums[i] values is not negative
            // if so increment "i"
            if(nums[i] > nums.size() || nums[i] <= 0 ){
                i++;
            }
            
            // check nums[nums[i]-1] is equal to nums[i]
            else if(nums[nums[i]-1] == nums[i]){
                i++;
            }
            // else swap the numbers in correct order
            else{
                int temp = nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i] = temp;
            }
        }
        
        int i=0;
        
        // loop rus for o - "n"
        for(i=0;i<nums.size(); i++){
            // check the nums[i]= i+1
            // if not then return i+1
            if (nums[i] != i+1){
                return i+1;
            }
        }
        return nums[i-1]+1;  
    }
};
