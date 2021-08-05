// Method = Iterative, using temporary variables
// Time Complexity T = O(n)
// Space Complexity S = O(n)


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // initialize tha carry 
        int carry = 1;
        
        // looping through the array from right to left andalso considering tha carry
        for(int i = digits.size()-1; i>=0 && carry == 1; i--){
            
            // adding the "n-1" element of the array with "carry"
            int sum = digits[i] + carry;
            
            // if sum is greater then or eual to "10"
            if (sum >= 10){
                
                // set carry to 1
                carry = 1;
                
                // set the modulo of the sum to the "n-1" element
                digits[i] = sum % 10;
                
            }
            
            // else if sum is lesser than 10 then
            else{
                
                //set carry to 0
                carry = 0;
                
                // set the sum to the "n-1" element
                digits[i] = sum;
                    
            }
            
        }
        
        // checking whether the carry is "0" or not
        if(carry != 0){
            
            // creating a new vector array of type int, with the size of digits+1
            vector<int> newDigits(digits.size()+1);
            
            // assigning the first element of an array with carry.
            newDigits[0] = 1;
            
            // Assigning the newDigits value from the old array
            for(int j = 1; j<newDigits.size()-1; j++){
                newDigits[j] = digits[j-1];
            }
            
            // return newDigits
            return newDigits;
        }

        
        // return the values
        return digits;
    }
};
