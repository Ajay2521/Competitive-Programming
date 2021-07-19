// Method - Recursion(Brute Force)
// Time Complexity T - O(n^n)
// Space Complexity S - O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
                
        // return the sum of all maximum transaction
        return calMax(prices, 0);
    }
    
    int calMax(vector<int>& prices, int start){
        
        // Ensure the price list is not empty
        // if empty return "0"
        if( start >= prices.size() ){
            return 0;
        }
        
        // initialise the maximum to "0"
        int maximum = 0;
        
        
        // loop throug the price array from "0" to "n-1"
        for(int i = start; i < prices.size() ; i++){
            
            // initialise the maximumProfit to "0"
            int maximumProfit = 0;
        
            // loop throug the price array from "i+1" to "n"
            for(int j = i+1; j < prices.size() ; j++){
                
                // ensure "i" is less than "i+1"
                if(prices[i] < prices[j]){
            
                    // finding the profit
                    int profit = calMax(prices, j+1) + prices[j] - prices[i];
                    
                    // ensure the max profit
                    if (profit  > maximumProfit){
                        maximumProfit = profit;
                    }
                }
            }
            // ensure the total maxmium
            if (maximumProfit > maximum){
                maximum = maximumProfit;
            }
        }   
        // return the maximumProfit value
        return maximum;
    }
};
