// Title: Min Stack
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/min-stack/

    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
    obj->top = -1;
    return obj;
}

void minStackPush(MinStack* obj, int value) {
    obj->stack[++obj->top] = value;
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->min_stack[obj->min_top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
    obj->min_top = -1;
        obj->min_stack[++obj->min_top] = (value < current_min) ? value : current_min;

    if(obj->min_top == -1)
    {
        obj->min_stack[++obj->min_top] = value;
    }
    else
    {
    }
        int current_min = obj->min_stack[obj->min_top];
    obj->min_top--;
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
MinStack* minStackCreate() {

 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
