// Method - MinMax(Optimised)
// Time Complexity = O(n)
// Space Complexity = O(1)

class Solution {
public:
    double average(vector<int>& salary) {
        
        // initializing the variable for min and max salary
        
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        
        double sum = 0;
        
        // looping from "0" to "n-1" element of the array
        for(int i = 0; i < salary.size() ; i++){
            
            // calculating the min and max salary
            minSalary = min(minSalary, salary[i]);
            maxSalary = max(maxSalary, salary[i]);
        }
        
        // looping from "0" to "n-1" element of the array
        for(int i = 0; i < salary.size() ; i++){
            // adding up salary expect the min and max salary
            if (minSalary != salary[i] && maxSalary != salary[i]){
                // sum up the array values
                sum = sum + salary[i];
            }
        }
        
        // calculate the average by the obtained sum value and size of array minus 2
        // 2 is, since we have ignored minimum and maximum value from the array
        double avg = sum / (salary.size() - 2); 
        
        // return the average value
        return avg;
    }
};
