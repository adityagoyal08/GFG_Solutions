//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        
        // Intuition: Sort the arrays and then go for comparison
        
        vector<pair<int,int>> meet;
        
        for(int i=0;i<n;i++){
            meet.push_back({end[i], start[i]});

        }
        
        sort(meet.begin(), meet.end());
        
        int freetime = 0;
        int count = 0;
        
        for(auto num: meet)
        {
            if(num.second > freetime){
                count ++;
                freetime = num.first;
            }
        }
        
        return count;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends