#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

typedef struct {
    int elements[MAX_SIZE];
    int top;
} Stack;

void init(Stack *stack);

void push(Stack *stack, int value);

int pop(Stack *stack);

int peek(Stack *stack);

int isEmpty(Stack *stack);

int isFull(Stack *stack);

void cleanup(Stack *stack);

#endif /* STACK_H */