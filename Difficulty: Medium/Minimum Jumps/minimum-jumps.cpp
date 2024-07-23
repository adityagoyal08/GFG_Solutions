//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

// class Solution{
//   public:
//     int minJumps(int arr[], int n){
//         // Your code here
//         if(arr[0] == 0){
//             return -1;
//         }
//         if(n == 1){
//             return 0;
//         }
        
//         int count = 0;
//         int max = 0;
//         int sum = 0;
        
//         for(int i=0;i<n;i++){
            
//             sum = sum + arr[i];
//             int j = i;
            
//             // loop to find max element;
//             while( j < i + arr[i] && sum < n){
                
//                 if( max < arr[j])
//                     max = arr[j];
//                 j++;
//             }
            
//             count++;
            
//             if(sum >= n ){
//                 return count;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int minJumps(int arr[], int n) {
        if (n <= 1) return 0;  // No jumps needed if the array has one or no elements
        if (arr[0] == 0) return -1;  // Cannot move anywhere if the first element is 0

        int maxReach = arr[0];  // The farthest point that can be reached
        int step = arr[0];      // Steps we can still take
        int jumps = 1;          // Number of jumps needed

        for (int i = 1; i < n; i++) {
            // Check if we have reached the end of the array
            if (i == n - 1) return jumps;

            // Update the maximum reach
            maxReach = std::max(maxReach, i + arr[i]);

            // We use a step to get to the current index
            step--;

            // If no further steps are left
            if (step == 0) {
                // Increment the jump
                jumps++;

                // Check if the current index/position or lesser index is the maximum reach point from the previous jumps
                if (i >= maxReach) return -1;

                // Re-initialize the steps to the amount of steps to reach maxReach from position i
                step = maxReach - i;
            }
        }
        return -1;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends