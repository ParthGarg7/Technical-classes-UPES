// https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion

// /*
// class Node {
//   public:
//     int data;
//     Node* next;

//     // Default constructor
//     Node() {
//         data = 0;
//         next = NULL;
//     }

//     // Parameterised Constructor
//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     Node *insertAtEnd(Node *head, int x)
//     {
//         Node * temp = head;
//         if(head == NULL)
//         {
//             Node* newnode = new Node(x);
//             head = newnode;
//             return head;
//         }
//         while(temp->next != NULL)
//         temp = temp->next;
        
//         Node *newnode = new Node(x);
      
        
//         temp->next = newnode;
        
//         return head;
        
        
        
//     }
// };