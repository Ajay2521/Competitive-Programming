// Method = Dynamic Programming(Optimised)
// Time complexity = O(n^2)
// Space complexity = O(n^2)

class Solution {
    public List<List<Integer>> generate(int numRows) {
        // variable triangle to whold all the list values as output
        List<List<Integer>> triangle = new ArrayList<List<Integer>>();
        
        // Ensure numRows is not zero
        // if it is zero then return empty trainagle
        if (numRows == 0 ){
            return triangle;
        }
        
        //  adding inner list in triangle with value 1
        triangle.add(new ArrayList<>());
        triangle.get(0).add(1);
        
        // loop through 1 to n-1
        for (int i = 1; i < numRows ; i++){
            
            // initialise the row
            List<Integer> row = new ArrayList<Integer>();
            
            // getting the previous row value from the triangle
            List<Integer> prevRow = triangle.get(i - 1);
            
            // insert the row's first index value to 1
            row.add(1);
            
            // loop through the previous row
            for (int j = 1; j < i; j++){
                // add the previous row "j-th" element and "j+1" element
                row.add(prevRow.get(j) + prevRow.get(j-1));
            }
            
            // insert the row's last index value to 1
            row.add(1);
            
            // push the row values to the triangle
            triangle.add(row);
        }
        
        // return the pascal's triangle
        return triangle;
    }
}
