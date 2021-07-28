// Method - Hashmap
// Time Complexity T - O(n), since loop runs "n"
// Space Complexity S - O(n), Hashmap take extra space "n"

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Create a hashmap to store the occureance of a eleemnt in the array
        unordered_map<int, int> map; 
        
        // loop runs for 0 to n-1
        for(int i = 0; i < nums.size(); i++){
           
           // if the map contains the element "i", then
           if (map.find(nums[i]) != map.end()) {
               
               // increment the value of an element in the map by 1 
               map[nums[i]]++;
               
            } 
            // if the element is not present in the map
            // then add the element into map with value as 1
            else {
                map[nums[i]] = 1;
            }
        }
        
        // chehcking the occurence of an element is greater than n/2
        // if so return the element and break the loop
        for(auto i:map){
            if (i.second > (nums.size()/2)){
                return i.first;
                break;
            }
        }
        
        return -1;
    }
};
