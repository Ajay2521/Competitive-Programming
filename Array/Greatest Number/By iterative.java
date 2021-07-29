// Method - Iterative(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(n) 

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        
        // variable to store the maxmium value present in the array candies
        int maxVal = 0;
        
        // loops run for all the values of candies
        for(int i : candies){
            
            // if i is greater than maxVal
            // then assign the "i" to maxVal
            if( i > maxVal){
                maxVal = i; 
            }
        }
        
        // list to store the boolean values 
        List<Boolean> result = new ArrayList<Boolean>();
        
        // loop runs for 0 to n-1
        for(int i = 0; i < candies.length ; i++){
            
            // if the sum of candies[i] and extraCandie is equal to or greater then maximum value of Candies
            // then add boolean value "true" for the respective candies
            if(candies[i]+extraCandies >= maxVal){
                result.add(true);
            }
            // if then sum is less than max
            // then add boolean value "false" for the respective candies
            else{
                result.add(false);
            }
        }
        
        return result;
    }
}
