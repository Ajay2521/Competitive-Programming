// Method - Iterating from last element(Optimised)
// Time complexity T = O(m+n)
// Space Complexity S = O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // initialize the value of "m" and "n" to access the last element of an "nums1" and "nums2" array
        m = m-1;
        n = n-1;
        
        // looping from "m+n+1" to 0
        for(int i = m+n+1; i>=0 ; i-- ){
            
            // getting the last element of an array "nums1" and "nums2"
            // assigning the minium integer value, to avoid run time error
            int a = m >= 0 ? nums1[m] : INT_MIN;
            int b = n >= 0 ? nums2[n] : INT_MIN;
          
            
            // if the element of nums1 > num2
            // then place the nums1 element at the last place(num1[i]), and decrement the value of "m"
            if (a>b){
                nums1[i] = a;
                m--;
            }
            
            // if the element of nums1 < num2
            // then place the nums2 element at the last place(num1[i]), and decrement the value of "n"
            else{
                nums1[i] = b;
                n--;
            }
        }
    }
};
