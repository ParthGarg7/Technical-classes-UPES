// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-nodes-of-linked-list

// /*
// class Node {
//   public:
//     int data;
//     Node *next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     int getCount(Node* head) {
//         Node * temp = head;
//         int count = 0;
        
//         while(temp != NULL)
//         {
//             count += 1;
//             temp = temp->next;
//         }
        
//         return count;
        
//     }
// };