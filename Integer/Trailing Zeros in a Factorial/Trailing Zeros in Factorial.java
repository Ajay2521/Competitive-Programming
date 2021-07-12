// Solution = Java
// Method = By counting the 5 in a factorial
// Time Complexity = O(log5 (n))
// Space Complexity = O(1)

//import for Scanner and other utility classes
import java.util.*;


class TestClass {
    public static void main(String args[] ) throws Exception {

        //Scanner
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();	
        
        // Checks whether the given number is a Negative Number 
        if (n < 0){
            System.out.println(-1);
        }
        
        // initialize the varible countZeros to count the trailing zeros in a given factorial of "n"
        int countZeros = 0;
        
        // run the loop till the value of "n" is greater than 0
        while (n > 0){
            
            // divide the value of n by 5, since 2*5 makes a 10 
            // and counting the no. of 5 in a n can used to find the no. of zeros
            n /= 5;
        
            // add the value of "n" to the variable countZeros
            countZeros += n;
        }
        
        // it returns the trailing zeros in a given "n!"
	    System.out.println(countZeros);

    }

}
