// Title: Implement Queue using Stacks
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/implement-queue-using-stacks/

#define MAX 100

typedef struct {
    int in_stack[MAX];
    int in_top;
    int out_stack[MAX];
    int out_top;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
    q->in_top = -1;
    q->out_top = -1;
    
    return q;
}

void myQueuePush(MyQueue* obj, int x) {

    obj->in_stack[++obj->in_top] = x;
}

int myQueuePop(MyQueue* obj) {
    
    if(obj->out_top == -1)
    {
        while(obj->in_top != -1)
        {
            obj->out_stack[++obj->out_top] = obj->in_stack[obj->in_top--];
        }
    }

    return obj->out_stack[obj->out_top--];
}

int myQueuePeek(MyQueue* obj) {

    if(obj->out_top == -1)
    {
        while(obj->in_top != -1)
        {
            obj->out_stack[++obj->out_top] = obj->in_stack[obj->in_top--];
        }
    }

    return obj->out_stack[obj->out_top];
}

bool myQueueEmpty(MyQueue* obj) {
    
    return (obj->in_top == -1 && obj->out_top == -1);
}

void myQueueFree(MyQueue* obj) {

    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
