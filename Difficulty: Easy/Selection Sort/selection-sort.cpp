//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    // Function to perform selection sort on the given array.
    // int minimum(vector<int> arr){
    //     int mini = arr[0];
        
    //     for(int i=1;i<arr.length();i++){
    //         if(mini > arr[i]){
    //             mini = arr[i];
    //         }
    //     }
        
    //     return mini;
    // }
    void selectionSort(vector<int> &arr) {
        // code here
        
        // get the min
        // int min_element = minimum(arr);
        
        // // swap it
        // swap_element(arr, min_element);
        int n = arr.size();
        for(int i=0; i<=n-2;i++){
            
            int min = i;
            for (int j = i;j<=n-1;j++){
                
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        obj.selectionSort(a);

        Array::print(a);
        cout << "~" << endl;
    }
}

// } Driver Code Ends