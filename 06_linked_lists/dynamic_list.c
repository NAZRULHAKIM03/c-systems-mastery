#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* create_Node(int value);
void push(struct Node** head_ref, int new_data);

int main()
{
    struct Node* head = NULL;

    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    struct Node* current = head;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    current = head;
    struct Node* temp = NULL;

    while(current != NULL)
    {
        temp = current->next;
        free(current);
        current = temp;
    }

    return 0;
}

struct Node* create_Node(int value)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = NULL;
    return ptr;
}

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = create_Node(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}