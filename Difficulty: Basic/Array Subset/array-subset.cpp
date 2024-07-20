//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

#include<unordered_map>

string isSubset(int a1[], int a2[], int n, int m) {
    
    // fill the map and decrease the count values
    
    // check if a1.size() >= a2.size()
    if(n < m){
        return "No";
    }
    
    
    unordered_map<int,int> map;
    
    for( int i=0 ; i<n ; i++ ){
        
        map[a1[i]]++;
    }
    
    for( int j=0 ; j<m ; j++ ){
        
        if(map.find(a2[j]) == map.end()){
            
            return "No";
        }
        else{
            map[a2[j]]--;
            if(map[a2[j]] == 0){
                
                map.erase(a2[j]);
            }
        }
    }
    
    return "Yes";
}