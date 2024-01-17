#include <stdlib.h>
#include <stdio.h>
int MAXSIZE = 8;
int sz = 1;
int *stack;
int top = -1;
int const EMPTY = -10;
/* Check if the stack is empty */

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

/* Check if the stack is full */
int isFull()
{
    return 0;
}

/* Function to return the topmost element in the stack */
int peek()
{
    return stack[top];
}

/* Function to delete from the stack */
int pop()
{
    int data;
    if (!isEmpty())
    {
        data = stack[top];
        top = top - 1;
        sz--;
        stack = realloc(stack, sz * sizeof(int));
        return data;
    }
    else
    {
        printf("Could not retrieve data, Stack is empty.\n");
        return EMPTY;
    }
}

/* Function to insert into the stack */
int push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        sz++;
        stack = realloc(stack, sz * sizeof(int));
        stack[top] = data;
        return 1;
    }
    else
    {
        printf("Could not insert data, Stack is full.\n");
        return 0;
    }
}

/* Main function */
/*
int main()
{
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);
    printf("Element at top of the stack: %d\n", peek());
    printf("Elements: \n");

    // print stack data
    while (!isEmpty())
    {
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull() ? "true" : "false");
    printf("Stack empty: %s\n", isEmpty() ? "true" : "false");
    return 0;
}
*/
