// Method - Recursion(Optimised)
// Time Complexity T - O(n)
// Sapce Complexity S - O(n), recursion take "n" space


class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
         
        // if start is greater than or equal to 0;
        // and start value is not more than the size of the arr
        // and value of start in arr is greater than or equal to 0
        // then do the following
        if (start >= 0 && start < arr.size() && arr[start] >= 0){
            
            // base case
            if (arr[start] == 0){
                return true;
            }   
            
            // converting the value of arr[start] to negative value
            arr[start] = -1 * arr[start];
            
            // recursion case
            // start+arr[start] -> i +arr[i]
            // start-arr[start] -> i -arr[i]
            // travese in both the way and return the value
            return canReach(arr, start+arr[start]) || canReach(arr, start-arr[start]); 
        }
        
        // if any of the aboue condition of if false, return false
        return false;
    }
};
