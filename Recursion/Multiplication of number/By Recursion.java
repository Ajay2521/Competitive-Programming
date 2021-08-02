import java.util.*;

class HelloWorld {
    // recursive function
    public static int multiplyDigit(int m, int n){
	
	    // base case
	    if (n == 0){
	    	return 0;
	    }
	    
	    // recursion case
	    return multiplyDigit(m,n-1) + m;
	}
    
    public static void main(String[] args) {
        // initialize the variable
	    int m, n, prod;
	    
	    // getting input from user
	    Scanner s = new Scanner(System.in);
	    m = s.nextInt();
	    n = s.nextInt();
	    
	    // calling the resurcive function
	    prod = multiplyDigit(m,n);
	    
	    System.out.println(prod);
    }
}
