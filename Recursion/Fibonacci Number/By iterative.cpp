// Method - Iterative(Brute Force)
// Time Complexity T - O(n), since loop run for "n"
// Space Complexity S - O(1), Since brute force don't take extra space


class Solution {
public:
    int fib(int n) {
        // if the value of n is 1 or less than 1
        // then return "n"
        if (n <= 1){
            return n;
        }
        
        
        // if the value of "n" is 2
        // then return "1"
        if (n == 2){
            return 1;
        }
        
        // setting the current to "0", prev1 to "1" and prev2 to "1"
        int current = 0;
        int prev1 = 1;
        int prev2 = 1;
        
        
        // loop through 3 to "n"
        for(int i = 3; i<=n ; i++){
            
            // adding the prev1 and prev2 value for calculating the factorial
            current = prev1+prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
};
