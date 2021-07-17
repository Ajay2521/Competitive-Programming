// Method - Iteration from beggining(Brute Force)
// Time Complexity T = O(n)
// Space Complexity S = O(1)

class Solution {
    public int lengthOfLastWord(String s) {
        // initialize count variable to count the last word of the given string and return it
        int count = 0;
        
        // finding the size of the given string
        int n = s.length();
        
        // initializing the variable "i" for iteration
        int i = 0;
        
        // looping through the given string.
        while(i < n){
            
            // if the given string has no space then increment the "count" and "i"
            if(s.charAt(i) != ' '){
                count++;
                i++;
            }
            
            // if a space occured in a given String,
            else{
                
                // looping through the given string.                
                while(i < n && s.charAt(i) == ' '){
                    
                    // skipping out the whitespace in the given string
                    i++;
                }
                
                // if "i" reaches end of the string then return "count", 
                // since the last word in the string is already counted
                if(i == n){
                    return count;
                }
                
                // if "i" doesn't reach the end of the string 
                // then restart the count and for counting the next word in the string 
                else{
                    count = 0;
                }
            }
        }
        return count;
    }
}
