// Method - One pass(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // Ensure the price list is not empty
        // if empty return "0"
        if( prices.size() == 0){
            return 0;
        }
        
        // initialise the maximumProfit to "0"
        int maximumProfit = 0;
        
        // initialise the minimumBuy to the first value in the price list;
        int minimumBuy = prices[0];
        
        // loop throug the price array from "0" to "n"
        for(int i = 0; i < prices.size() ; i++){
            
            // ensure the minimumBuy has the minimum value from the price list
            // if not then, assigning the minium price to the minimumBuy
            if(prices[i] < minimumBuy){
                minimumBuy = prices[i];
            }
            // ensure to attend the maximum profit
            // if the maximum profit is not attend then assign the maximum value 
            else if((prices[i] - minimumBuy) > maximumProfit){
                maximumProfit = prices[i] - minimumBuy;
            }
        }
        // return the maximumProfit value
        return maximumProfit;
    }
};
