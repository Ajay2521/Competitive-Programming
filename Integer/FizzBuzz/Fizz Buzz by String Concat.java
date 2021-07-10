// Solution 2 - Java
// Method: String Concatenation
// Time Complexity  T = o(n), worst case
// Space Complexity  S = o(1) 

class Solution {
    public List<String> fizzBuzz(int n) {
        // creating a String array list
        List<String> ans = new ArrayList();
        
        // creating a loop which run for n time, since the loop starts with 1
        for(int i = 1; i<=n; i++){
            
            String ansStr = "";
            
            // checking if i is divisible by 3 or not, if divisible add "FizzBuzz" to the array list
            if( i % 3 == 0){
                ansStr += "Fizz";
            }
            
            // checking if i is divisible by 5 or not, if divisible add "Buzz" to the array list
            if(i % 5 == 0){
                ansStr += "Buzz";
            }
            
            // if i is not divisibe by 3 or 5, 3 and 5 then add up the i value in the form of string to the arrayList
            if( ansStr .equals("")){
                ansStr += Integer.toString(i);
            }
    
            ans.add(ansStr);
        }
        return ans;
    }
}
