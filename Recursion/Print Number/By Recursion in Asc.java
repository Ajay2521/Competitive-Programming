public class MyClass {
    
    // recursion function
    public static void printNumber(int n){
	    // base case
	    if( n == 0){
		    return;
	    }
	
	    // recursive case
	    printNumber(n-1);
	
	    System.out.print(n);
    
    }

    public static void main(String args[]) {
        
        // calling the recursion function
        printNumber(5);
        
    }
}
