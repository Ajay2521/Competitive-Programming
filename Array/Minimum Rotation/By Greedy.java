// Method - Greedy(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
    public int minDominoRotations(int[] tops, int[] bottoms) {
        
        // initialize the miniumRotation to -1, 
        int minimumRotation = -1;
        
        // loop runs for 1 to 6 times
        for(int i = 1; i<= 6; i++){
            
            // calling the recursive function
            int currentRotation = minRotation(tops, bottoms, i);
            
            // ensure the currentRotation is not negative
            // ensure the minimumRotation is not negative or minimumRotation is lesser than currentRoatation
            if (currentRotation != -1 && (minimumRotation != -1 || minimumRotation < currentRotation)){
                
                // assign the currentRotation value to minimumRotation
                minimumRotation = currentRotation;
            
            }
        
        }
        
        // return the minimum rotation value
        return minimumRotation;
    }
    
    // recursive function
    private int minRotation(int[] tops, int[] bottoms, int value){
    
        // initizalize the topVal and bottomVal
        int topVal = 0, bottomVal = 0;
        
        // loop runs for 0 to len(top)-1
        for(int i = 0; i < tops.length; i++){
            
            // if top[i] and bottom[i] is not equal to value return -1
            if (tops[i] != value && bottoms[i] != value){
                return -1;
            }
            // if top[i] is not equal to value, increment topVal
            else if(tops[i] != value){
                topVal++;
            }
            // if bottom[i] is not equal to value, decrement bottomVal
            else if (bottoms[i] != value){
                bottomVal++;
            }
         }
       // return minimum of topVal and BottomVal 
       return Math.min(topVal, bottomVal);
    }
}
