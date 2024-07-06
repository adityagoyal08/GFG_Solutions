//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        
        // logic : 
        // two pointers i and j
        // arr[0] = i and arr[size - 1] = j
        // increase i if it is less than j 
        // decrease j if it is less than i
        // when i == j then check the sums
        // if equal == got the equ point
        // not equal then -1 return
        
        // int i = 0;
        // int j = arr.size()-1;
        
        // int sum_left = arr[0];
        // int sum_right = arr[arr.size()-1];
        
        // while(i<j){
            
        //     if(sum_right == sum_left && i==j-2 ){
        //       return i+2;
        //     }
        
        //     else if(sum_right == sum_left && i==j){
        //         return i+1;
        //     }
            
        //     else if(sum_left < sum_right){
        //         i++;
        //         sum_left = sum_left + arr[i];
        //     }
            
        //     else{
        //         j--;
        //         sum_right = sum_right + arr[j];
        //     }
        // }
        // if(sum_left == sum_right && i==j)
        //     return i+1;
        
        // return -1;
        
        
        //----------------------- ANOTHER LOGIC HERE---------------------
        
            int n = arr.size();
          int ls=0,rs=0;
        for(int i=0;i<n;i++){
            ls+=arr[i];
        }
        for(int i=n-1;i>=0;i--){
            rs+=arr[i];
            if(ls==rs){
                return i+1;
            }
            ls-=arr[i];
        }
        
        return -1;
        
        
        
    
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends