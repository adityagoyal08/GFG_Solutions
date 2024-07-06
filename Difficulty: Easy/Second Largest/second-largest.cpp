//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    
    int findmax(vector<int> array){
        
        if(array.size() ==0){
            return -1;
        }
        
        int max = array[0];
        
        for(int i=0;i<array.size();i++){
            if(max < array[i]){
                max = array[i];
            }
        }
        
        return max;
    }
    
    int print2largest(vector<int> &arr) {
        // Code Here
        vector<int> vc;
        
        int max = findmax(arr);
        for(int i=0;i<arr.size();i++){
            if(arr[i] != max){
                vc.push_back(arr[i]);
            }
        }
        
        int second_max = findmax(vc);
        
        return second_max;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends