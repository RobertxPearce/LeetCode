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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        ListNode* middle = head;
        int count = 0;
        
        while (tmp != nullptr) {
            count++;
            tmp = tmp->next;
        }
        count = static_cast<int>(count / 2);
        
        for (int i = 0; i < count; i++) {
            middle = middle->next;
        }
        return middle;
    }
};