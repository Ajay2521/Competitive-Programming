class Solution {
public:
    double myPow(double x, int n) {
        
        int N;
            
        // checking whether the "n" is zero
        if(n == 0){
            return 1;
        }
        
        
        // if "n" is postivite then do the below operation
        if(n > 0){
            
            // if "n" is negative then convert the negative value into pasitive one
            N =  n;
        
        }
        
        // checking whether "N" is divisible by "2", if so
        if(N % 2 == 0){
            return myPow(x, N / 2) * myPow(x, N / 2);
        }
        
        // if "n" is not divisble by
        else{
            
            return x * myPow(x, N / 2) * myPow(x, N / 2);   
        }

    }
        
};
