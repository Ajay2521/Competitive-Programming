// Method = Iterative, without temporary variables
// Time Complexity T = O(n)
// Space Complexity S = O(1)


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // size of the array
        int n = digits.size();
            
        // Add 1 to last digit and find carry
        digits[n-1] += 1;
        
        // seting up the carry
        int carry = digits[n-1]/10;
        
        // seting up the last digit value less than 10
        digits[n-1] = digits[n-1] % 10;
         
        // Traverse from second last digit
        for (int i=n-2; i>=0; i--)
        {
            // if carray is present 
            if (carry != 0)
            {
                // add the carry to the digits
                digits[i] = digits[i] + carry;
                
                // checking for the carry
                carry = digits[i]/10;
                
                // seting up the "i"th digit value less than 10
                digits[i] = digits[i] % 10;
            
            }
        
        }
        
        // checking whether the carry is "0" or not
        // If carry is 1,
        if (carry != 0){
        
            // then instering 1 at the beginning of vector
            digits.insert(digits.begin(), 1);
        
        }
        
        // return the values
        return digits;
    }
};
