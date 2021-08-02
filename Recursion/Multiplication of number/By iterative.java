import java.util.*;

class HelloWorld {
    
    public static void main(String[] args) {
        // initialize the variable
	    int m, n, prod=1;
	    
	    // getting input from user
	    Scanner s = new Scanner(System.in);
	    m = s.nextInt();
	    n = s.nextInt();
	    // loop runs for "1" to "n"
	    for(int i = 1; i<=n; i++){
	    	
	    	// suming the product = product + m;
	    	prod += m;
	    	
	    }
	    
	    System.out.println(prod);
    }
}
