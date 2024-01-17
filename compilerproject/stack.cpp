#include <stdlib.h>
#include <stdio.h>
#include <stack>
using namespace std;
int MAXSIZE = 8;
int sz = 1;
std::stack <int> st;
int top = -1;
int const EMPTY = -10;
/* Check if the st is empty */

int isEmpty()
{
    return st.empty();
}

/* Check if the st is full */
int isFull()
{
    return 0;
}

/* Function to return the topmost element in the st */
int peek()
{
    return st.top();
}

/* Function to delete from the st */
int pop()
{
    int data;
    if (!isEmpty())
    {
        int temp = st.top();
        st.pop();
        return temp;
    }
    else
    {
        printf("Could not retrieve data, st is empty.\n");
        return EMPTY;
    }
}

/* Function to insert into the st */
int push(int data)
{
    st.push(data);
    return 1;
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
    printf("Element at top of the st: %d\n", peek());
    printf("Elements: \n");

    // print st data
    while (!isEmpty())
    {
        int data = pop();
        printf("%d\n", data);
    }
    printf("st full: %s\n", isFull() ? "true" : "false");
    printf("st empty: %s\n", isEmpty() ? "true" : "false");
    return 0;
}
*/
