//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        
        // Pointers here
        int i=0;
        int size= S.length();
        
        string return_string = "";
        
        while(i<size){
            
            string temp_str = "";
            
            while(i < size && S[i] != '.'){
                temp_str += S[i];
                i++;
            }
            return_string = temp_str + "." + return_string;
             if(i == size-1 && S[i] == '.'){
                return_string =  "." + return_string;
            }
            if(i < size && S[i] == '.'){
                i++;
            }
            
        }
        
        // To remove the last dot
        if (!return_string.empty()) {
            return_string.pop_back();
        }
      
        
        return return_string;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
