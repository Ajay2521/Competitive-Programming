// Method - String Iteration(Optimised)
// Time Complexity - O(1)
// Space Complexity - O(1)


class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        // declare and define the possible digits 
        string digits ="123456789"; 
        
        // variable to store the result
        vector<int> result;
        
        // getting the size of low and high 
        // by converting it to string and finding its length
        int sizeLow = to_string(low).length();
        int sizeHigh = to_string(high).length();
        
        // outter loop runs for sizeLow to sizeHigh
        for(int i = sizeLow; i <= sizeHigh; i++){
            
            // inner loop runs for "0" to "10-i" times
            // sinze we iterate through the string and string index starts at "0"
            for (int j = 0; j < 10-i; j++){
                
                // getting the sibstring from the digits, 
                // which is in range of j to i, Ex: 0 to 3    
                // stoi - Used to convert the obtained substring into int type 
                int x = stoi(digits.substr(j,i));
                
                // check the value of x in range of "low" and "high"
                // if so append the values to the "result" variable
                if(x>= low && x<=high){
                    result.push_back(x);
                }
            }
            
        }
        // printing the result
        return result;
    }
};
