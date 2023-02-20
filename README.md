
# Stack
The Stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. In a stack, elements are inserted and removed from the same end, which is called the top.

# Basic Operations
The basic operations that can be performed on a stack are:

- `init`: Initializes the stack.
- `push`: Inserts an element at the top of the stack.
- `pop`: Removes and returns the element at the top of the stack.
- `peek`: Returns the element at the top of the stack without removing it.
- `isEmpty`: Checks if the stack is empty.
- `isFull`: Checks if the stack is full.
- `cleanup`: Clears the stack.

# Usage
To use the stack implementation, you need to include the stack.h header file in your program:

~~~C
#include "stack.h"
~~~

You can push elements into the stack using the `push` function:

~~~C
push(&stack, 10);
push(&stack, 20);
push(&stack, 30);
~~~

You can check if the stack is empty using the `isEmpty` function:

~~~C
if (isEmpty(&stack)) {
  // The stack is empty.
} else {
  // The stack is not empty.
}
~~~

You can get the element at the top of the stack without removing it using the `peek` function:

~~~C
int top = peek(&stack);
if (top != -1) printf("The top of the stack is %d.\n", top);
~~~

You can remove the element at the top of the stack using the `pop` function:

~~~C
int value = pop(&stack);
if (value != -1) printf("The removed element is %d.\n", value);
~~~

Finally, you can clear the stack using the cleanup function:

~~~C
cleanup(&stack);
~~~



## Note
The maximum size of the stack is defined by the constant `MAX_SIZE` in the stack.h header file.