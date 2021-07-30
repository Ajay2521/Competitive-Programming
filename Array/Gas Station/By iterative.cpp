// Method - Iterative(BruteForce)
// Time Complexity T - O(n^2), nested loop runs for n^2
// Space Complexity S - O(1), Bruteforce runs in constant sapce


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        // ensure the gas and cost are not null or empty
        // if not then return -1
        if(gas.size() == 0 || cost.size() == 0) {
            return -1;
        }
        
        // getting the no. of the gas station
        int n = gas.size();
        
        // outter loop runs for 0 to n-1
        for (int i = 0; i < n; i++) {
            
            // the remaining gas in the task
            // starting it is "0"
            int remainGas = 0;
            bool isSuccess = true;
            
            // inner loop runs for i to n+i
            for (int j = i; j < n + i; j++) {
                
                int station = (j+n) % n;
                
                remainGas = remainGas - cost[station] + gas[station] ;
                
                // if gas in tank becomes less than "0", 
                // then break inner loop and increment the outer loop
                if (remainGas < 0) {
                    isSuccess = false;
                    break;
                }
                
            }
            // if success
            // then return the "i"
            if (isSuccess == true) {
                return i;
            }
        }
        
        // if no succes not turn to 0 
        // then return -1
        return -1;
    }
};
