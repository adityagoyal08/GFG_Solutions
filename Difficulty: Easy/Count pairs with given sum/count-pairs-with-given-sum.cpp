//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        // code here
        
        /*
        
        Given the array [1, 2, 3, 4, 3, 3] and k = 6.
        
        Initialization:
        
        m is an empty hashmap: {}
        ans is initialized to 0: ans = 0
        Loop Through the Array:
        
        First Iteration (i = 0, arr[i] = 1):
        
        Calculate val = k - arr[i] = 6 - 1 = 5
        m[val] is 0 because m[5] doesn't exist in the hashmap, so ans remains 0.
        Increment m[arr[i]]: m[1] becomes 1. Now, m = {1: 1}.
        Second Iteration (i = 1, arr[i] = 2):
        
        Calculate val = k - arr[i] = 6 - 2 = 4
        m[val] is 0 because m[4] doesn't exist in the hashmap, so ans remains 0.
        Increment m[arr[i]]: m[2] becomes 1. Now, m = {1: 1, 2: 1}.
        Third Iteration (i = 2, arr[i] = 3):
        
        Calculate val = k - arr[i] = 6 - 3 = 3
        m[val] is 0 because m[3] doesn't exist in the hashmap, so ans remains 0.
        Increment m[arr[i]]: m[3] becomes 1. Now, m = {1: 1, 2: 1, 3: 1}.
        Fourth Iteration (i = 3, arr[i] = 4):
        
        Calculate val = k - arr[i] = 6 - 4 = 2
        m[val] is 1 because m[2] exists in the hashmap with a count of 1.
        Increment ans by m[val]: ans becomes 1 (ans = 1).
        Increment m[arr[i]]: m[4] becomes 1. Now, m = {1: 1, 2: 1, 3: 1, 4: 1}.
        Fifth Iteration (i = 4, arr[i] = 3):
        
        Calculate val = k - arr[i] = 6 - 3 = 3
        m[val] is 1 because m[3] exists in the hashmap with a count of 1.
        Increment ans by m[val]: ans becomes 2 (ans = 2).
        Increment m[arr[i]]: m[3] becomes 2. Now, m = {1: 1, 2: 1, 3: 2, 4: 1}.
        Sixth Iteration (i = 5, arr[i] = 3):
        
        Calculate val = k - arr[i] = 6 - 3 = 3
        m[val] is 2 because m[3] exists in the hashmap with a count of 2.
        Increment ans by m[val]: ans becomes 4 (ans = 4).
        Increment m[arr[i]]: m[3] becomes 3. Now, m = {1: 1, 2: 1, 3: 3, 4: 1}.
        Final Result:
        The function returns ans, which is 4, indicating there are 4 pairs: (2, 4), (3, 3), (3, 3), and (3, 3) that sum to 6.
                
        */
        
        // size here
        int n = arr.size();
        
        // using unordered map
        unordered_map<int ,int>m;
        
        // count pairs
        int ans=0;
        
        // loop through the vector
        for(int i=0;i<n;i++){
            
            // calculate difference
            int val= k- arr[i];
            
            // if found in the map then ans increase according to the frequency
            if(m[val]){
                ans+=m[val];
            }
            
            // increase the frequency
            m[arr[i]]++;
        }
        
        // return ans
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int k;

        cin >> k;
        cin.ignore(); // Ignore the newline character after k

        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getPairsCount(arr, k);
        cout << ans << "\n";
    }

    return 0;
}
// } Driver Code Ends