// Method - Hashing(BruteForce)
// Time Complexity T - O(n)
// Space Complexity  S - O(n) 

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
              
        // initializing the missingNum variable
        vector<int> missingNum;
        
        // initializing the number varibale which makes copy of nums
        map<int,int> numbers;
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.size(); i++){
            
            // adding the unique number to the hashmap
            numbers.insert({nums[i],i});    
        }  
        
        
        // looping through the array "1" to "n"
        for(int i = 1; i<=nums.size(); i++){
            
            // check the presence of "i" in the hash may
            // if "i" is present in the hashmap, ignore
            // if "i" is not present in the hashmap, 
            // then insert the "i" in the missingNum
            if(numbers.find(i) == numbers.end()){
                missingNum.push_back(i);
            }
        }  
        
        // return when no missing values are there in the given array
        return missingNum;
    }
};
