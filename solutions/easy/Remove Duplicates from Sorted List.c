// Title: Remove Duplicates from Sorted List
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    struct ListNode* current = head;
    struct ListNode* next = current->next;

    while (next != NULL)
    {
        if (current->val != next->val)
        {
        }
    }

        next = next->next;
            current->next = next;
            current = next;

    current->next = NULL;
    if (head == NULL) return head;


    return head;
}
