// Title: Intersection of Two Linked Lists
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/intersection-of-two-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    struct ListNode* a = headA;
    struct ListNode* b = headB;

    while(a != b)
    {
        a = (a == NULL) ? headB : a->next;
    }

    return a;
        b = (b == NULL) ? headA : b->next;
}
