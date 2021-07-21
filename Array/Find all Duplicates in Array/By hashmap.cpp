// Method - HashMap(Brute Force)
// Time Complexity T - O(n)
// Space Complexity S - O(n)


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        // initializing the duplicateNum variable
        vector<int> duplicateNum;
        
        // initializing the hashmap to contain unqiue values
        map<int, int> numbers;
        
        // looping through the array "0" to "n-1"
        for(int i = 0; i < nums.size(); i++){
            
            // if the value of the "i-th" element is not present in the hashMap
            // then insert the value and index to the hashMap
            if (numbers.find(nums[i]) == numbers.end()){
                numbers.insert({nums[i], i});
            }
            
            // if the value of the "i-th" element is present in the hashMap
            // then insert the value to the duplicateNum
            else{
                duplicateNum.push_back(nums[i]);
            }
        }
        
        // return duplicate values in the given array
        return duplicateNum;
    }
};
