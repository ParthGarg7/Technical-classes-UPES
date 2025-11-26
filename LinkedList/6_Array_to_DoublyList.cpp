// https://www.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-doubly-linked-list

// // User function Template for C++

// /*
// class Node{
// public:
//     Node* prev;
//     int data;
//     Node* next;

//     Node()
//     {
//         prev = NULL;
//         data = 0;
//         next = NULL;
//     }

//     Node(int value)
//     {
//         prev = NULL;
//         data = value;
//         next = NULL;
//     }
// };*/

// class Solution {
//   public:
//     Node* constructDLL(vector<int>& arr)
//     {
//       int n = arr.size();
//       Node *head = NULL ;
//       Node *temp = NULL;
//       for(int i = 0; i < n ; i++)
//       {
//          if(head == NULL)
//          {
//              head = new Node(arr[i]);
//              temp = head;
//          }
//          else
//          {
//              Node *newnode = new Node(arr[i]);
//              newnode->prev = temp;
//              temp->next = newnode;
//              temp = newnode;
//          }
//       }
//       return head;
        
//     }
// };