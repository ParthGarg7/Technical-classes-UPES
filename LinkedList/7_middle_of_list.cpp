// https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// /*
// class Node {
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// }; */

// class Solution {
//   public:
//     int getMiddle(Node* head)
//     {
//       Node * slow = head;
//       Node * Fast = head;
      
//       while(Fast != NULL && Fast->next != NULL)
//       {
//          slow = slow->next;
//          Fast = Fast->next->next;
//       }
     
//       return slow->data;

      
     
        
//     }
// };