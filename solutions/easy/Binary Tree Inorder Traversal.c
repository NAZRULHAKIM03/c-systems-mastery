// Title: Binary Tree Inorder Traversal
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/binary-tree-inorder-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode* node, int* result, int* index)
{
    if (node == NULL) return;

    inorder(node->left, result, index);
    result[*index] = node->val;
    (*index)++;
    inorder(node->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    
    int* result = (int*)malloc(100 * sizeof(int));
    int index = 0;

    inorder(root, result, &index);

    *returnSize = index;
    return result;
}
