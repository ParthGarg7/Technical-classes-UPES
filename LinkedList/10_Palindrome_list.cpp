// https://leetcode.com/problems/palindrome-linked-list/submissions/1841474832/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution 
// {
// public:
//     bool isPalindrome(ListNode* head) 
//     {
//         ListNode* slow = head;
//         ListNode* Fast = head;
//         while(Fast != NULL && Fast->next != NULL)
//         {
//             slow = slow->next;
//             Fast = Fast->next->next;
//         }

//         ListNode* First = head;
//         ListNode* Second = reverseList(slow);

//         while(Second != NULL)
//         {
//             if(First->val != Second->val)
//             return false;

//             First = First->next;
//             Second = Second->next;
//         }
//         return true;
//     }

//     ListNode* reverseList(ListNode* head)
//     {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while(curr != NULL)
//         {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };