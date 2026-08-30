// Title: Palindrome Linked List
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode* prev = NULL;
    struct ListNode* current = slow;
    struct ListNode* temp = NULL;

    while(current!=NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }

    while(prev!=NULL && head!=NULL)
    {
        if(head->val == prev->val)
        {
            head = head->next;
            prev = prev->next;
        }
        else
        {
            return false;
        }
    }

    return true;
}
