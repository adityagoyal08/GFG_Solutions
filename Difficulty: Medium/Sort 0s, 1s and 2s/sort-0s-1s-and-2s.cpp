//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    // void swap(int &a,int &b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    
    void sort012(int a[], int n)
    {
        // code here 
        // int zero = 0;
        // for (int i=0;i<n;i++){
            
        //     if(a[i] == 0){
        //         swap(a[zero], a[i]);
        //         zero++;
                
        //     }
        // }
        
        // int one = zero;
        // for(int i=one;i< n;i++){
        //     if(a[i] == 1){
        //         swap(a[one],a[i]);
        //         one++;
        //     }
        // }
        
        sort(a,a+n);
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends