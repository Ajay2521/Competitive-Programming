// Method = Dynamic Programming
// Time Complexity T = O(n^2)
// Space Complexity T = O(k), where is the size for given row number

class Solution {
public:
 
    vector<int> getRow(int rowIndex) {
        
        // initialize the result
        vector<int> result;
          
        // add 1 to the result array first index value
        result.push_back(1);
        
        for(int i = 1; i <= rowIndex; i++){
            
            vector<int> temp;
            temp.push_back(1);
            
            // the loop will run for 1 to n - 1 times
            for(int j = 1; j < i ; j++){
                temp.push_back(result[j-1] + result[j]);
            }
            temp.push_back(1);
            result = temp;
        }
        
        // return the result
        return result;
    }
};
