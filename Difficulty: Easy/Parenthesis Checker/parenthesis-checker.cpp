//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        // we will be using stack here.
        
        //ALOG::
        
        
            // example : string x = [( { } ) ]
            
            stack<char> ss;
            
            for(int i=0; i < x.length() ; i++)
            {
                
                if (x[i] == '}' || x[i] == ')' || x[i] == ']'){
                    
                    if (ss.empty()){
                        return false;
                    }
                    char temp = ss.top();
                    if((temp == '[' && x[i] == ']') || (temp == '{' && x[i] == '}') || (temp == '(' && x[i] == ')')){
                        ss.pop();
                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                    ss.push(x[i]);
                }
            }
            
            if(!ss.empty()){
                return false;
            }
            return true;
            
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends