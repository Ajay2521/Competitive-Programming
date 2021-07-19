// Method - One Pass(Optimised)
// Time Complexity T - O(n)
// Space Complexity S - O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // initialise the maximumProfit to "0"
        int maximumProfit = 0;
        
        // loop throug the price array from "1" to "n"
        for(int i = 1; i < prices.size() ; i++){
            
            // ensure that the "i-th" element is always greater than the previious "i-1-th" element
            if (prices[i] > prices[i - 1]){
                
                // adding up the maximum value and difference between current and previous element
                maximumProfit = maximumProfit + prices[i] - prices[i-1];
            }
        }    
        // return the maximum transaction
        return maximumProfit;
    }
};

