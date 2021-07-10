// Solution 1 in C++
// method = Iterative
// Time Complexity  T = o(n), worst case
// Space Complexity  S = o(1) 

class Solution {
public:
    vector<string> fizzBuzz(int n) {
          // creating a String array list
        vector<string> ans;
        
        // creating a loop which run for n time, since the loop starts with 1
        for(int i = 1; i<=n; i++){
            
            // checking if i is divisible by both 3 and 5 or not, if divisible add "FizzBuzz" to the array list
            if( i % 3 == 0 && i % 5 == 0){
                ans.push_back("FizzBuzz");
            }
            
            // checking if i is divisible by 3 or not, if divisible add "Fizz" to the array list
            else if(i % 3 == 0){
                ans.push_back("Fizz");
            }
            
            // checking if i is divisible by 5 or not, if divisible add "Buzz" to the array list
            else if( i % 5 == 0){
                ans.push_back("Buzz");
            }
    
            
            // if i is not divisibe by 3 or 5, 3 and 5 then add up the i value in the form of string to the arrayList
            else{
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
