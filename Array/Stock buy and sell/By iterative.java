// Method - Iterative(Brute Force)
// Time Complexity T - O(n^2)
// Space Complexity S - O(1)

class Solution {
    public int maxProfit(int[] prices) {
        
        // Ensure the price list is not empty
        // if empty return "0"
        if( prices.length == 0){
            return 0;
        }
        
        // initialise the maximumProfit to "0"
        int maximumProfit = 0;
        
        // loop throug the price array from "0" to "n-1"
        for(int i = 0; i < prices.length -1 ; i++){
            
            // loop throug the price array from "1" to "n"
            for(int j = i+1; j < prices.length; j++){
                
                // finding the profit for each "i" and "i+1" element
                int profit = prices[j] - prices[i];
                
                // if profit is more than a maximumProfit
                // then update the maximumProfit with the profit value
                if( profit > maximumProfit){
                    
                    maximumProfit = profit;
                }
            }
        }
        // return the maximumProfit value
        return maximumProfit;
    }
}
