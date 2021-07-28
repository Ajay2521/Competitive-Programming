// Method - Hashmap(Optimised)
// Time Complexity T - O(nk)
// Space Complexity S - O(nk)
// Where n - no. of string inputs, k - size of the largest array


class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        
        // if string is empy then return empty array
        if (strs.length == 0) {
            return new ArrayList();
        }
        
        // Create hashmap to store
        // The sorted letters as "key" and orginial strings as "values"
        Map<String, List> map = new HashMap<String, List>();
        
        // loop runs for all the strings in "strs"
        for (String str : strs) {
            
            // initializig the charStr
            char[] charStr = new char[26];
            
            // getting the frequency of each letter
            for (char c : str.toCharArray()) {
                charStr[c - 'a']++;
            }
            
            // converting the sorted charStr to String
            String key = String.valueOf(charStr);
            
            // if the key is not present in the hashmap
            // then add the key in new arraylist in the hashmap
            if (!map.containsKey(key)) {
                map.put(key, new ArrayList());
            }
            
            // adding up the orginial string as a value to the sorted string 
            map.get(key).add(str);
        }
        
        // returning the list of Array contains the values of the map
        return new ArrayList(map.values());
    }
}
