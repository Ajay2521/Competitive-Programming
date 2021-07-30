// Method - One pass(Optimised)
// Time Complexity T - O(n), loop runs for n
// Space Complexity S - O(1), runs in constant sapce

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        // ensure the gas and cost are not null or empty
        // if not then return -1
        if(gas.size() == 0 || cost.size() == 0) {
            return -1;
        }
        
        // inisialize the variables 
        int remainGas = 0;
        int totalGas = 0;
        int totalCost = 0;
        int current = 0;
        
        // compare total gas and total cost.
        // adding up the value of all the gas and cost
        for (int i = 0; i < gas.size(); i++) {
            
            // adding up the gas in the array
            totalGas = totalGas + gas[i];
            
            // adding up the gas in the array
            totalCost = totalCost + cost[i];
        }
        
        // If total gas is less than total cost
        // then return -1 , since the route is not possible
        if (totalGas < totalCost) {
            return -1;
        }
        
        // If total gas is equal or greater than total cost
        // then the loop run for 0 to gas-1
        for (int i = 0; i < gas.size(); i++) {
            
            // Arriving at each station, calculating the remaining gas
            remainGas = remainGas  - cost[i] + gas[i];
            
            // If the remainGas < 0
            // then return -1 , since the route is not possible
            if (remainGas < 0) {
                
                // if the route is unsuccessfull then increment the current station
                current = i + 1;
                
                // set the remainGas to 0
                remainGas = 0;
            }
        }
        // return the current station
        return current;
    }
};
