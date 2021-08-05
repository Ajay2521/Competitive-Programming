// Method = Iterative, without temporary variables
// Time Complexity T = O(n)
// Space Complexity S = O(1)


class Solution {
    public int[] plusOne(int[] digits) {
        
         // size of the array
        int n = digits.length;
        
        // ensure the size of array is greater than 1
        if(n < 1){
            return digits;
        }
            
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
        // If carry is not "0",
        if (carry != 0){
        
            // creating a new vector array of type int, with the size of digits+1
            int[] newDigits = new int[digits.length+1];
            
            // assigning the first element of an array with carry.
            newDigits[0] = 1;
            
            // Assigning the newDigits value from the old array
            for(int j = 1; j<newDigits.length-1; j++){
                newDigits[j] = digits[j-1];
            }
            
            // return newDigits
            return newDigits;
        }
       
        // return the values
        return digits;
    }
    
}
