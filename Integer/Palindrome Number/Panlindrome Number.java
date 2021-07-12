// Solution - Java
// Method = Revert half of the number 
// Time complexity T = O(log 10(n)), since divided the input by 10 for every iteration
// Space complexity s = O(1)

class Solution {
    public boolean isPalindrome(int x) {
        // checking for negative values or check presence of 0 in last value or begining value
        if( (x< 0) || (x % 10 == 0 && x != 0)  ){
            return false;
        }
        // initiallizing reverseNumber to 0
        int reverseNumber = 0;
        
        // the loop will run till x value is greater than reverNumber
        while(x > reverseNumber){
            
            // finding the mod/remainder of x, which returns the last value 
            int rem = x % 10;
            
            // adding up the remainder of x with the reverseNumber after multipling the reverseNumber with 10  
            reverseNumber = reverseNumber * 10 + rem;
            
            // dividing the x value by 10 which removes the last value of x
            x = x / 10;
        }
        
        // When the length is an odd number, we can get rid of the middle digit by reverseNumber/10
        // For example when the input is 12321, at the end of the while loop we get x = 12, reverseNumber = 123,
        // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it
        // returns true if x and reverseNumber were same else return false
        return x == reverseNumber || x == reverseNumber/10;
    }

}
