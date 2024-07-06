//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        
        // return vector
        vector<int> vc;
       
        // if n ==0
        if(n <=0){
            return vc;
        }
        
        
        // max element in the right side
        int temp = arr[n-1];
        
        for(int j = n - 1; j>=0; j--){
            
            if(arr[j] >= temp){
                
                 vc.insert(vc.begin(), arr[j]);
                temp = arr[j];
            }
        }
        return vc;
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends