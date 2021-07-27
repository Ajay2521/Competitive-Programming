
        // inisalize the result
        int[] prod = new int[nums.length];
        
        // outter loop runs for o to n-1 
        for (int i = 0; i< nums.length; i++){

            int product = 1;
            
            // inner loop runs for o to n-1
            for (int j = 0; j < nums.length; j++){
                
                // if i is not j then make a product of nums[j]
                if(i != j){
                    product = product * nums[j];
                }
            }
            
            // assign the product value to the prod[i]th element
            prod[i] = product;
        }
        
        return prod;
  }

};
