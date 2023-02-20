#include <stdio.h>
#include "stack.h"

int main() {
  Stack stack;
  init(&stack);

  // Test pushing and peeking items
  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);
  printf("Peek: %d\n", peek(&stack)); // Should print 30

  // Test popping items
  int item = pop(&stack);
  printf("Popped item: %d\n", item); // Should print 30
  printf("Peek after pop: %d\n", peek(&stack)); // Should print 20

  // Test checking if stack is empty
  printf("Is empty: %d\n", isEmpty(&stack)); // Should print 0 (false)
  pop(&stack);
  pop(&stack);
  printf("Is empty: %d\n", isEmpty(&stack)); // Should print 1 (true)


  // Test cleaning up the stack
  cleanup(&stack);

  return 0;
}