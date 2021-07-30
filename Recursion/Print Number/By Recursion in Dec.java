public class MyClass {
    
    // recursion function
    public static void printNumber(int n){
	    // base case
	    if( n == 0){
		    return;
	    }
	    
	    System.out.print(n);
	    
	    // recursive case
	    printNumber(n-1);
	
	
    }

    public static void main(String args[]) {
        
        // calling the recursion function
        printNumber(5);
        
    }
}
