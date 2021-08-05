// Method = Dynamic Programming
// Time Complexity T = O(n^2)
// Space Complexity T = O(k), Where K is the row obtained for given row

class Solution {
    public List<Integer> getRow(int rowIndex) {
    
        // initialize the result
        List<Integer> result = new ArrayList<Integer>();
        
        for(int i = 0; i <= rowIndex; i++) {
            
            // adding the 1 to the first index 
            result.add(1);
            
            for(int j = i - 1; j > 0; j--) {
                result.set(j, result.get(j-1) + result.get(j));
            }
        }
        
        // return the result
        return result;
    }
}
