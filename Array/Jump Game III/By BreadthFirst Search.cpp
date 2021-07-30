// Method - Breadth First Search(BruteForce)
// Time Complexity T - O(n)
// Sapce Complexity S - O(n)

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
         
        // getting the size of the array
        int n = arr.size();
        
        // creating a linked list queue
        queue<int> q;
        
        // adding the start value to the queue
        q.push(start);
        
        // loop will be running queue is empty
        while (!q.empty()) {
            
            // remove the element at front
            int node = q.front();
            
            // check if reach zero
            // then return 0
            if (arr[node] == 0) {
                return true;
            }
            
            // if value is less than "0" say negative
            // then skip that iteration
            if (arr[node] < 0) {
                continue;
            }

            // check available next steps
            // if addition of node and value is less than size of array
            // then use i + arr[i];
            // offer = insert the specific element in queue
            if (node + arr[node] < n) {
                q.emplace(node + arr[node]);
            }
            
            // if subtraction of node and value is greater than or equal to 0
            // then use i - arr[i];
            // offer = insert the specific element in queue
            if (node - arr[node] >= 0) {
                q.emplace(node - arr[node]);
            }
            
            // mark value of node as visited
            arr[node] = -arr[node];
        }
        
        // if any of the aboue condition of if false, return false
        return false;
    }
};
