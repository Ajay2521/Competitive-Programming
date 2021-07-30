import java.util.*;

public class MyClass {

    public static void main(String args[]) {
        
        // n store digits
	      int n;
        int count = 0;
        Scanner s = new Scanner(System.in);
        
        n = s.nextInt();
        
        int sum = 0;
	      while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        
        // print the value of sum
		    System.out.print(sum);
    }
}
