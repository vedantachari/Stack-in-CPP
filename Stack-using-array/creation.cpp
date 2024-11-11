#include<iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int* arr;
};

int main()
{
    stack* S = new stack;
    S->size = 10;
    S->top = -1;
    S->arr = new int[S->size];
    return 0;
}