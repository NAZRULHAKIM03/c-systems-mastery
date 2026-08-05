// Title: Middle of the Linked List
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/middle-of-the-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* mid = head;

    while(head != NULL && head->next != NULL)
    {
        mid = mid->next;
        head = head->next->next;
    }

    return mid;
}
