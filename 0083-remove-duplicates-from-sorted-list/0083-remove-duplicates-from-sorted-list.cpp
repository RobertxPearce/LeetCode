/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)                   // Check if head is null.
            return head;
        
        ListNode* curr = head->next;        // Pointer to next node.
        ListNode* prev = head;              // Pointer to previous node.
        
        while (curr != NULL) {              // Loop until null is reached.
            if (curr->val == prev->val) {   // Check if value match.
                prev->next = curr->next;    // If so remove duplicate.
                curr = curr->next;          // Go to next node.
            } else {
                prev = curr;                // Go to next node.
                curr = curr->next;          // Go to next node.    
            }
        }

        return head;                        // Return head pointer.
    }
};