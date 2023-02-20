#include "stack.h"

void init(Stack *stack) {
    stack->top = -1;
}

void push(Stack *stack, int value) {
    if (stack->top < MAX_SIZE - 1) {
        stack->top++;
        stack->elements[stack->top] = value;
    }
}

int pop(Stack *stack) {
    if (stack->top >= 0) {
        int value = stack->elements[stack->top];
        stack->top--;
        return value;
    }
    return -1; // return -1 to indicate an error
}

int peek(Stack *stack) {
    if (stack->top >= 0) {
        return stack->elements[stack->top];
    }
    return -1; // return -1 to indicate an error
}

int isEmpty(Stack *stack) {
    return (stack->top < 0);
}

int isFull(Stack *stack) {
    return (stack->top >= MAX_SIZE - 1);
}

void cleanup(Stack *stack) {
    stack->top = -1;
}