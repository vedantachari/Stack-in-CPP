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
    if (isFull(ptr)){cout << "Stack Overflow" << endl;}
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(stack* &ptr)
{
    if (isEmpty(ptr)){cout << "Stack Underflow" << endl;}
    else
    {
        int val = ptr->arr[ptr->top] ;
        ptr->top = ptr->top-1;
        cout << "Popped Value :\t" << val << endl;
    }
}

void peek(stack* &ptr, int p) 
{
    if (p < 0 || p > ptr->size-1) 
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
    int con;
    int i = 1;
    while (i==1)
    {
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display Stack\n5. Quit";
        cin >> con;
        switch (con)
        {
        case 1:
            int dta;
            cout << "Enter data to Push : ";
            cin >> dta;
            push(S,dta);
            break;
        case 2:
            pop(S);
            break;
        case 3:
            int ind;
            cout << "Enter index : ";
            cin >> ind;
            peek(S,ind);
            break;
        case 4:
            display(S);
            break;
        case 5:
            i++;
            break;
        default:
            break;
        }
    }
    
    return 0;
} 