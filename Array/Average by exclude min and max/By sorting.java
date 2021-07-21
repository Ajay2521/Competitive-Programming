// Method - Sorting(Brute Force)
// Time Complexity = O(n)
// Space Complexity = O(1)


class Solution {
    public double average(int[] salary) {
        
        // initializing the variable sum
        double sum = 0;
        
        // sorting the given array
        Arrays.sort(salary);
        
        // looping from "1" to "n-2" element of the array
        // which is ignoring the first and last element of an array
        for(int i = 1; i < salary.length - 1 ; i++){
            
            // sum up the array values
            sum = sum + salary[i];
        }
        
        // calculate the average by the obtained sum value and size of array minus 2
        // 2 is, since we have ignored minimum and maximum value from the array
        double avg = sum / (salary.length - 2); 
        
        // return the average value
        return avg;
    }
}
