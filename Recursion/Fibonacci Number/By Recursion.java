// Method - Recursion(Optimised)
// Time Complexity T - O(2^n)
// Space Complexity S - O(n)

class Solution {
    public int fib(int n) {
        
        // if the value of n is 1 or less than 1
        // then return "n"
        if (n <= 1){
            return n;
        }
        
        // resursion case
        // n = n-1 + n-2
        // Ex: n =3,  3 = 3-1 +3-2
        return fib(n-1) + fib(n-2);
    }
}
