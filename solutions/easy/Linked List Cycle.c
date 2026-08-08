// Title: Linked List Cycle
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/linked-list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
    }
        fast = fast->next->next;

    if (head == NULL) return false;

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    return false;

        if (slow == fast) return true;
}
