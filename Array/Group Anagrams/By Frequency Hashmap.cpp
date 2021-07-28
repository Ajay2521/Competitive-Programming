// Method - Hashmap(BruteForce)
// Time Complexity T - O(nk)
// Space Complexity S - O(nk)
// Where n - no. of string inputs, k - size of the largest array


class Solution {
    
public:
    
    //counting frequencies and changing to string, that is to be used as a key
    string makeKey(string s){
        // initilize the charcater array
        int charArr[26]={0};
        
        // converting the string to charcter and finding frequency of a character in a string 
        for(int i=0; i < s.size(); i++){
            charArr[s[i] - 'a']++;
        }
        
        string a;
        
        for(int i=0; i<26; i++){
            
            // converting the charArr to String
            a = a + to_string(charArr[i]);
            
            //using 'a' as the separator between frequencies of 2 numbers
            a = a + 'a'; 
        }
        
        return a;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {   
        
        // Create hashmap to store
        // The sorted letters as "key" and orginial strings as "values"
        unordered_map<string, vector<string>> map;
        
        // to store the result
        vector<vector<string>> groupAnagrams;
        
        // loop runs for all the strings in "strs"
        for (auto s : strs) {
            
            // calling a function makeKey for making the frequency 
            string x = makeKey(s);
            
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
