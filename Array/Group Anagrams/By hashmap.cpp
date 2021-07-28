// Method - Hashmap(BruteForce)
// Time Complexity T - O(nk log k)
// Space Complexity S - O(nk)
// Where n - no. of string inputs, k - size of the largest array


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {   
        
        
        // Create hashmap to store
        // The sorted letters as "key" and orginial strings as "values"
        unordered_map<string, vector<string>> map;
        
        // to store the result
        vector<vector<string>> groupAnagrams;
        
        // loop runs for all the strings in "strs"
        for (auto s : strs) {
            
            // coping  the string 
            string x = s;
            
            // sorting the charStr
            sort(x.begin(), x.end());
            
            // if the key is not present in the hashmap
            // then add the key in new arraylist in the hashmap
            if (map.find(x) != map.end()) {
                map[x].push_back(s);
            }
            else{
                map[x] = {s};
            }
        }
        
        // pushing the map values to the result variable
        for(auto i : map){
            groupAnagrams.push_back(i.second);
        }
        
        // is there is no anagram or string is empty return empty array 
        if(groupAnagrams.size()==0){
            return {};
        }
        
        // returning the list of Array contains the values of the map
        return groupAnagrams;
    }
};
