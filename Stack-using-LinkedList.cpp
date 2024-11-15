#include<iostream>
using namespace std;

struct node 
{
    int data;
    node* next;
};

struct stack 
{
    node* top;
};

bool isEmpty(stack* head) 
{
    return head->top == NULL;
}

void display(stack* head)
{
    node* p = head->top;
    cout << "Elements : " << endl;
    while (p!=NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

void push(stack* head, int val) 
{
    node* new_node = new node();
    new_node->data = val;
    new_node->next = head->top;
    head->top = new_node;

}

void pop(stack* head) 
{
    if (isEmpty(head)) 
    {
        cout << "Stack Underflow!" << endl;
    } 
    else 
    {
        node* temp = head->top;
        int poppedValue = temp->data;
        head->top = temp->next;
        delete temp;
        cout <<  "Popped Value : " << poppedValue << endl;
    }
}

int main() 
{
    stack* S = new stack;
    S->top = NULL;

    push(S, 10);
    push(S, 20);
    push(S, 30);
    push(S, 40);
    push(S, 50);
    push(S, 60);

    pop(S);
    display(S);

    return 0;
}
