// Method - Iteration from last letter(Optimised)
// Time Complexity T = O(n)
// Space Complexity S = O(1)

class Solution {
    public int lengthOfLastWord(String s) {
        // initialize count variable to count the last word of the given string and return it
        int count = 0;
        
        // finding the size of the given string
        int n = s.length();
        
        // looping through the given string from last letter.
        for(int i = n-1; i>=0; i--){
            
            // if the given string has no space then increment the "count"
            if(s.charAt(i) != ' '){
                count++;
            }
            
            // if a space occured in a given String,
            else{
                
                // if "count" is not "0" then return count, 
                // since the last word in the string is already counted
                if(count > 0){
                    return count;
                }
                
            }
        }
        return count;
    }
}
