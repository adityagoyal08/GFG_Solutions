//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/


// Example:

// 1 -> 2 -> 3 -> 4 , k = 2

// length = 4;
// pos = 4 - 2 + 1 = 3;

// while loop{
  
// 1. pos = 3, pointer = 1
// 2. pos = 2, pointer = 2
// 3. pos = 1, pointer = 3
// 4. pos = 0, STOP

//}

// return pointer = 3; RIGHT









// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        int length = 0;
        
        Node *temp = head;
        
        while(temp != NULL){
            temp = temp->next;
            length++;
        }
        
        Node *pointer = head;
        
        int pos = length - k;
        
        if(pos < 0){
            return -1;
        }
        
        while(pos != 0){
            
            pointer = pointer->next;
            pos--;
        }
        
        return pointer->data;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cin >> x;
        cin.ignore();

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        cout << ob.getKthFromLast(head, x) << endl;
    }
    return 0;
}
// } Driver Code Ends