// Optimised - HashMap
// Time Complexity T = O(n), HashMap runs for "n" time
// Space Complexity S = O(n), Hashmap takes extra space for "n" values


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // creating vector int to return ans
        vector<int> ans;
        
        // Map used to hash 2 integers, just like python dictionary 
        map<int, int> hashMap;
        
        // looping through all the values in the array from 0 to "n-1"
        for(int i = 0; i<nums.size(); i++){
            
            // getting difference from target and "i-th" value
            int difference = target - nums[i];
            
            // if the difference is already in the hashMap 
            // then return the map value and current "i-th value" 
             if(hashMap.find(difference) != hashMap.end()){
                ans.push_back(hashMap[difference]);
                ans.push_back(i);
                return ans;    
            }        
            
            // if the difference is not present in the hashMap
            // add the "i-th" value and its index to the hashMap
            else{
                hashMap.insert({nums[i],i});
            }
        }
        return ans;
    }
};
