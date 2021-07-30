// Method - Iteration(Brute Force)
// Time Complexity - O(n^2), since nested loop runs n^2 times
// Space Complexity - O(1), Bruteforce runs on constant space


class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        // variable to store the result
        List<Integer> result = new ArrayList<>();
        
        // outter loop runs for 1 to 9 times
        for(int i =1; i<10; i++){
            
            // assigning the "i" value to "x"
            int x = i;
            
            // inner loop runs for "i+1" to 9 times
            for (int j = i+1; j<10; j++){
                
                // multiple the value of x with 10, 
                // to make the value in the form of tens, hundres and so on...
                // Eg: 1 becomes 10, 12 becomes 120 and so on
                x = x * 10;
                
                // adding the value of "j" to the "x"
                // Ex: 10 + 2 => 12, 120 + 3 = > 123
                x = x + j;
                
                // check the value of x in range of "low" and "high"
                // if so append the values to the "result" variable
                if(x>= low && x<=high){
                    result.add(x);
                }
                // if the value of "x" turns more than high 
                // then break the inner loop
                if(x > high){
                    break;
                }
                
            }
            
        }
        
        // sort the result variable
        Collections.sort(result);
        
        // printing the result
        return result;
    }
}
