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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* forward = nullptr;
        while(curr!=nullptr){
            forward = curr->next;      // 1. Save the next node so we don't lose it
    curr->next = prev;         // 2. Flip the pointer backward
    prev = curr;               // 3. Shift prev and curr one step forward
    curr = forward;
        }
        return prev;
    }
    
};