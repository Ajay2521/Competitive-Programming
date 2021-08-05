// Method = Dynamic Programming(Optimised)
// Time complexity = O(n^2)
// Space complexity = O(n^2)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // variable triangle to whold all the list values as output
        vector<vector<int>> triangle;
        
        // Ensure numRows is not zero
        // if it is zero then return empty trainagle
        if (numRows == 0 ){
            return triangle;
        }
        
        //  adding inner list in triangle with value 1
        triangle.push_back({{1}});
        
        // loop through 1 to n-1
        for (int i = 1; i < numRows ; i++){
            
            // initialise the row
            vector<int> row;
            
            // getting the previous row value from the triangle
            vector<int> prevRow = triangle[i - 1];
            
            // insert the row's first index value to 1
            row.push_back(1);
            
            // loop through the previous row
            for (int j = 1; j < i; j++){
                // add the previous row "j-th" element and "j+1" element
                row.push_back(prevRow[j] + prevRow[j-1]);
            }
            
            // insert the row's last index value to 1
            row.push_back(1);
            
            // push the row values to the triangle
            triangle.push_back(row);
        }
        
        // return the pascal's triangle
        return triangle;
    }
};
