// Method = Divide and conquer
// Time Complexity T = O(log (base(2)) (n))
// Space Complexity S = O(1)

class Solution {
public:
    double myPow(double x, int n) {
        
        long N = n;
        
        double ans = 1.0; 
        
        // checking whether the "n" is zero
        if(n == 0){
            return 1;
        }
        
        // checking whether the "n" is negative number
        if(n < 0){
            
            // if "n" is negative then convert the negative value into pasitive one
            N =  -1 * N;
        
        }
        
        // loop runs till "N" becomes "0"
        while(N > 0){
            
            // checking whether the "N" is divisible by 2, if so  
            if(N % 2 == 0){
                x *= x;      // x = x * x, multipling the base value 
                N /= 2;      // N = N / 2, dividing the power by 2 
            }
            
            // if "N" is not divisible by 2, then
            else{
                
                ans *= x; // ans = ans * x, multiple the base value with the ans
                N -= 1; // N = N - 1, subtract the power by 1 to make it divisible by 2
            }
            
        }
            
        // if "n" is a negative number return
        if(n < 0){
            return (double)(1/ans);
        }
        
        return ans;
    }
        
};
