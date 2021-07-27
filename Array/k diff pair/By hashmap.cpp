// Method - HashMap(optimised)
// Time complexity T - O(n)
// Space complexity S - O(n) 

class Solution {
public:
 
    
    int findPairs(vector<int>& nums, int k) {
        // inisalize the count variable for counting the possible pairs
        int count = 0;
      
        // creating the frequency hash map so store the frequency of the number in a array
        unordered_map<int, int> map;
        
        // loops run for 0 to n-1 value
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        
        // if k value is 0, then
        if (k == 0) {
                
            //count number of elements in the array, appear more than or equal twice.
            for(auto x: map) 
                if(x.second >= 2) 
                    count++;
        }
        
        // if K is not equal to 0
        else {
                
            // then search for key + k in the map     
            for(auto x : map)
            {
                if(map.find(x.first + k) != map.end()) 
                    count++; 
            }
        }
      
        // return the result
        return count;
    }
};
