// Method - Stack
// Time Complexity T - O(n)
// Space Complexity S - O(n)

class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        
        // checking the whether the size of asteroid is less than "1"
        // if so return the asteroid;
        if(asteroids.length < 1 ){
            return asteroids;
        }
        
        // creating stack to puch and pop the asteroids for the given conditions
        Stack<Integer> stackAsteroids = new Stack();
        
        // looping through 0 to "n-1" element        
        for( int i = 0; i < asteroids.length ; i++){
            
            // if the asteroid value is positive 
            // then add it to the stack
            if( asteroids[i] >= 0 ){
                
                // pushing the value to stack
                stackAsteroids.push(asteroids[i]);
                
            }
            
            // if the asteroid value encountered to be negative
            // then do the following
            else{
                
                // Remove all positive asteroids before our current asteroid
                // !stackAsteroids.isEmpty() - Checking the stack is not empty
                // stackAsteroids.peek() >= 0 - the maximum value in the stack is greater than or equal to 0
                // abs(stackAsteroids.peek()) < abs(asteroids[i]) - Checking whether the  absolute top value of stack is less than the absolute current negative value,
                // if so then pop the absolute top value from the stack
                while (!stackAsteroids.isEmpty() && stackAsteroids.peek() >= 0 && Math.abs(stackAsteroids.peek()) < Math.abs(asteroids[i])){
                    stackAsteroids.pop();
                }  
                
                // if the stack is empty or the peek value is less than "0"
                // then push the current value
                if(stackAsteroids.isEmpty() || stackAsteroids.peek() < 0){
                    stackAsteroids.push(asteroids[i]);
                } 
                
                // if the top value is equal to the current absolute value then  
                // then pop the stack value
                else if(stackAsteroids.peek() == Math.abs(asteroids[i])){
                    stackAsteroids.pop();
                }   
            }
        }
         // converting the stack value to vector array
        int[] result = new int[stackAsteroids.size()];
        
        // looping the stack from right to left, "n-1" to 0
        for(int i = result.length - 1; i>=0; i--){
            result[i] = stackAsteroids.pop();
        }
        
        return result;
    }
}
