// Formula - nCr => nCr * (n-r) / (r-1)
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
    public List<Integer> getRow(int rowIndex) {
    
        // initialize the result
        List<Integer> result = new ArrayList<Integer>();
        
        // nCr = 1
        long nCr = 1;
        
        // add 1 to the result arr first index value
        result.add(1);
        
        // the loop will run for 1 to n - 1 times
        for(int i = 0; i < rowIndex; i++){
            
            // nCr+1 = nCr * (n - r) / (r - 1);
            
            nCr = nCr * (rowIndex - i) / (i + 1);
            
            // adding up the nCr obtained value
            result.add((int)nCr);
        }
        
        // return the result
        return result;
    }
}
