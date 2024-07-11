//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        
        // idea here:
        // so i am using unordered map and i will store
        // the occurrences of the characters from string a or b
        // then i will check or compare the occurrences
        // if a.occur element count in b is less than false
        // return true; 
        
        
        // unordered map here
        unordered_map<char,int> umap;
        
        // loop to fill the map
        for(int i=0;i<a.length();i++){
            
            // filling the map
            umap[a[i]]++;
        }
        
        // loop to check for b occurrence in the map
        for(int i=0;i<b.length();i++){
            
            // check for b[character] in map and resuce the nubmer
            if(umap[b[i]]-- <= 0){
                return false;
            }
            if(umap[b[i]] == 0){
                umap.erase(b[i]);
            }
        }
        
        if(!umap.empty()){
            return false;
        }
        
        return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends