// https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-linked-list


// /*
// // Representation of a node
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int d) {
//         data = d;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     Node* arrayToList(vector<int>& arr) 
//     {
//     Node *Head = NULL;
//     Node *temp = NULL;
    
//     for(int i = 0 ; i < arr.size(); i++)
//     {
//         if(Head == NULL)
//         {
//             Head = new Node(arr[i]);
//             temp = Head;
//         }
//         else
//         {
//             Node *newnode = new Node(arr[i]);
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
    
//  return Head;
        
//     }
// };