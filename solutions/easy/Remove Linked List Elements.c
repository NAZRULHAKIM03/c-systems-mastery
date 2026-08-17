// Title: Remove Linked List Elements
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/remove-linked-list-elements/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode dummy;
    dummy.val = -1;
    dummy.next = NULL;

    struct ListNode* current = &dummy;

    while (head != NULL)
    {
        if (head->val != val)
        {
            current->next = head;
            current = current->next;
        }

        head = head->next;
    }

    return dummy.next;

    current->next = NULL;
}
