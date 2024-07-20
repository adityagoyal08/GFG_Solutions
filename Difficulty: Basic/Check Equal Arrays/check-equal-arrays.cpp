//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
#include <unordered_map>

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        
        // get the Hashmap<int, int>
        
        if(arr1.size() != arr2.size()){
            return false;
        }
        
        int size = arr1.size();
        
        unordered_map<int,int> map;
        
        for( int i = 0 ; i < size ; i++ ){
            
            map[arr1[i]]++;
            
        }
        
        for( int i = 0 ; i < size ; i++ ){
            
            if(map.find(arr2[i]) != map.end()) { // Check if the element exists in the map
                
                map[arr2[i]]--; // Decrement the value
                
                if(map[arr2[i]] == 0) {
                    
                    map.erase(arr2[i]);
                }
            }
        }
        
        if(!map.empty()){
            return false;
        }
        
        return true;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr1, arr2;
        string input1, input2;

        getline(cin, input1); // Read the entire line for the first array elements
        stringstream ss1(input1);
        int number;
        while (ss1 >> number) {
            arr1.push_back(number);
        }

        getline(cin, input2); // Read the entire line for the second array elements
        stringstream ss2(input2);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        cout << (ob.check(arr1, arr2) ? "true" : "false") << "\n";
    }
    return 0;
}
// } Driver Code Ends