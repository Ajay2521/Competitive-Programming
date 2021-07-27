// Method - Left and Right(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(n)

/*
Index: 0
Nums[Index] = 1 (default)
Left[Index] = 1
Right[Index] = 2 * 3 * 4 = 24
Result[Index] = Left[Index] * Right[Index] = 1 * 24 = 24

Index: 1
Nums[Index] = 2
Left[Index] = 1
Right[Index] = 3 * 4 = 12
Result[Index] = Left[Index] * Right[Index] = 1 * 12 = 12

Index: 2
Nums[Index] = 3
Left[Index] = 1 * 2 = 2
Right[Index] = 4
Result[Index] = Left[Index] * Right[Index] = 4 * 2 = 8

Index: 3
Nums[Index] = 4
Left[Index] = 1 * 2 * 3 = 6
Right[Index] = 1 (default)
Result[Index] = Left[Index] * Right[Index] = 6 * 1 = 6
*/    

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // inisialize the tw varible as left and right
        int left[nums.size()];
        int right[nums.size()];
        
        // setting up the default value
        left[0] = 1;
        right[nums.size()-1] = 1;
        
        
        // getting product all the left values from the current index
        for (int i = 1; i< nums.size(); i++){
            left[i] = left[i - 1] * nums[i - 1];
        }
        
        // getting product all the right values from the current index
        for (int i = nums.size()-2; i >= 0 ; i--){
            right[i] = right[i + 1] * nums[i + 1];
        }
        
        // calcluating the product of left and right
        for (int i = 0; i< nums.size(); i++){
            nums[i] = left[i] * right[i];
        }
        
        return nums;
    }
};
