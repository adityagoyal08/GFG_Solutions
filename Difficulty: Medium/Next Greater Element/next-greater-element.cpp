//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        stack<long long> s;                   // Initialize an empty stack to store elements.
        vector<long long> ans(n, -1);         // Initialize a vector 'ans' of size 'n' with all elements set to -1.

        for(int i = n-1; i >= 0; i--){        // Iterate over the array from the last element to the first.
           
            while(!s.empty() && s.top() <= arr[i]){  // While the stack is not empty and the top element of the stack is less than or equal to the current array element.
                s.pop();                      // Pop elements from the stack.
            }
           
            if(!s.empty()){                   // If the stack is not empty after popping,
                ans[i] = s.top();             // Set the current element of 'ans' to the top element of the stack (this is the next greater element).
           
            }
           
            s.push(arr[i]);                   // Push the current array element onto the stack.
        }
        
        return ans;           
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends