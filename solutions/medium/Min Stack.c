// Title: Min Stack
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/min-stack/

#define max 30000


typedef struct {
    int stack[max];
    int top;
    int min_stack[max];
    int min_top;
} MinStack;


MinStack* minStackCreate() {
    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
    obj->top = -1;
    obj->min_top = -1;
    return obj;
}

void minStackPush(MinStack* obj, int value) {
    obj->stack[++obj->top] = value;

    if(obj->min_top == -1)
    {
        obj->min_stack[++obj->min_top] = value;
    }
    else
    {
        int current_min = obj->min_stack[obj->min_top];
        obj->min_stack[++obj->min_top] = (value < current_min) ? value : current_min;
    }
}

void minStackPop(MinStack* obj) {
    obj->top--;
    obj->min_top--;
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->min_stack[obj->min_top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
