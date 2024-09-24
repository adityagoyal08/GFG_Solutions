//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        // vector<pair<int ,int>> platform;
        
        // for(int i=0;i<arr.size();i++){
            
        //     paltform.push_back({dep[i], arr[i]});
        // }
        
        // sort(platform.begin(), platform.emd());
        
        // int count = 0;
        // int freetime = dep[0];
        
        // for(auto num:platform){
            
        //     if(paltform.second <= freetime){
        //         count++;
        //     }
        //         freetime = platform.first;
            
        // }
        
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int N = arr.size();
            
        int count = 0;
        int maxcount = 0;
        int i = 0;
        int j = 0;
        
        while(i < N){
            
            if(arr[i] <= dep[j]){
                count++;
                i = i+1;
                
            }   
            else{
                count--;
                j = j + 1;
            }
            
            maxcount = max(count, maxcount);
        }
        
        return maxcount;
    }
};


//{ Driver Code Starts.
//  Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> dep(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int j = 0; j < n; j++) {
            cin >> dep[j];
        }
        Solution ob;
        cout << ob.findPlatform(arr, dep) << endl;
    }
    return 0;
}
// } Driver Code Ends