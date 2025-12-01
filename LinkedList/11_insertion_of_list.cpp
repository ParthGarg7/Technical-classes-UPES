// https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/1841484227/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
//     {
//           unordered_map<ListNode*,int> map;
//           ListNode* temp = headA;

//           while(temp != NULL)
//           {
//               map[temp] = temp->val;
//               temp = temp->next;
//           }

//           temp = headB;
//           while(temp != NULL)
//           {
//              if(map.find(temp) != map.end())
//              return temp;
//              temp = temp->next;
//           }

//           return NULL;

//     }
// };