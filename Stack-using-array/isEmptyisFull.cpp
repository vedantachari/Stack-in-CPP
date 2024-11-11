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

int main()
{
    stack* S = new stack;
    S->size = 10;
    S->top = -1;
    S->arr = new int[S->size];
    return 0;
}