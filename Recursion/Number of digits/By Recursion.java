import java.util.*;

public class MyClass {
    
  
    public static int countDigit(int n){
    	
    	// base case
    	if (n == 0){
    		return 0;
    	}
    	
    	// recursion case
    	return countDigit(n/10)+1;
    	
    }

    public static void main(String args[]) {
        
        // n store digits
	      int n;
        int count = 0;
        Scanner s = new Scanner(System.in);
        
        n = s.nextInt();

        // print the value of count
		    System.out.print(countDigit(n));
    }
}
