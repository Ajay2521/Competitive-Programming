class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
     
        // Output string to store the answer
        string result = "";
 
        // Ensure numerator is non-zero,
        // if numerator is zero , then return "0"
        if (numerator == 0){
            return "0";
        }
        
        if((numerator < 0 && denominator > 0) || (numerator > 0 && denominator < 0)){
            result.append("-");
        }
            
        // getting the absolute value of the numerator and denominator
        long long int n = abs(numerator);
        long long int d = abs(denominator);
        
        // Calculate the absolute part
        // (before decimal point), which is quotitent
        long long int quotitent = n / d;
            
        // Append the quotitent
        result += to_string(abs(quotitent));
        
        // If completely divisible, return answer.
        if (n % d == 0){
            return result;
        }
        
        // append the decimal "." dot
        result += ".";
        
        // Initialize Remainder
        long remainder = n % d;
        
        // create the map to store the remainder
        map<int, int> remMap;
     
        // Position at which fraction starts repeating, if it exists
        int index;
        
        
        // run the loop till remainder becomes "0" and repeathing becomes "true"
        while (remainder > 0) {
            
            // If the remainder is already seen,
            // then there exists a repeating fraction.
            // break the loop and print the result, after appending the remainder
            if (remMap.find(remainder) != remMap.end()) {
     
                result.insert( remMap[remainder], "(");
                
                result.append(")");
                
                break;
            }
            // if no remainder found
            // add the remainder to the map 
            // with key as remainder and value as size of the result
            else{
                remMap[remainder] = result.size();
            }
            
            remainder = remainder * 10;
 
            // Calculate quotient, append it to result and
            // calculate next remainder
            long long int temp = remainder / d;
            
            remainder = remainder % denominatr;
            
            result += to_string(temp);
        }
        
        return result;
    }
};
