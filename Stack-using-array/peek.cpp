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
            cout << "Element " << p << " : " << ptr->arr[p] << endl;
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


void peek(stack* &ptr, int p) 
{
    if (p < 0) 
    {
        cout << "OutOfRange" << endl;
    }
    else 
    {
        cout << "Element at " << p << "-->" << ptr->arr[ptr->top - p + 1] << endl;
    }
}

int main()
{
    stack* S = new stack;
    S->size = 10;
    S->top = -1;
    S->arr = new int[S->size];
    push(S, 11);
    push(S, 22);
    push(S, 33);
    push(S, 44);
    push(S, 55);
    display(S);
    peek(S,4);
    return 0;
}