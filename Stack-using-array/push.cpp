#include<iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int* arr;
};

bool isEmpty(stack* ptr)
{
    return ptr->top==-1;
}

bool isFull(stack* ptr)
{
    return ptr->top==ptr->size-1;
}

void display(stack* &ptr)
{
    int p=ptr->top;
    if (isEmpty(ptr))
    {
        cout << "Empty Stack" << endl;
    }
    else
    {
        cout << "Stack Elements" << endl;
        while (p!=-1)
        {
            cout << "---> "<< ptr->arr[p] << endl;
            p--; 
        }
        cout << endl;
    }
}

void push(stack* &ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int main()
{
    stack* S = new stack;
    S->size = 10;
    S->top = -1;
    S->arr = new int[S->size];

    push(S, 23);
    push(S, 65);
    push(S, 4);
    push(S, 64);
    push(S, 5);
    display(S);

    return 0;
}