class Solution {
public:
    double myPow(double x, int n) {
            
        // checking whether the "n" is zero
        if(n == 0){
            return 1;
        }
        
        
        // if "n" is postivite then do the below operation
        if(n>=1){
            return x*myPow(x,n-1);;    
        }
        
        // if "n" is negative then do the below operation
        else{
           
            return 1/(x*myPow(x,(abs(n)-1)));
        }

    }
        
};
