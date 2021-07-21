// Method - MinMax(Optimised)
// Time Complexity = O(n)
// Space Complexity = O(1)


class Solution {
    public double average(int[] salary) {
        
        // initializing the variable for min and max salary
        int minSalary = Integer.MAX_VALUE;
        int maxSalary = Integer.MIN_VALUE;
        
        double sum = 0;
        
        // looping from "0" to "n-1" element of the array
        for(int i = 0; i < salary.length ; i++){
            
            // calculating the min and max salary
            minSalary = Math.min(minSalary, salary[i]);
            maxSalary = Math.max(maxSalary, salary[i]);
        }
        
        // looping from "0" to "n-1" element of the array
        for(int i = 0; i < salary.length ; i++){
            // adding up salary expect the min and max salary
            if (minSalary != salary[i] && maxSalary != salary[i]){
                // sum up the array values
                sum = sum + salary[i];
            }
        }
        
        // calculate the average by the obtained sum value and size of array minus 2
        // 2 is, since we have ignored minimum and maximum value from the array
        double avg = sum / (salary.length - 2); 
        
        // return the average value
        return avg;
    }
}
