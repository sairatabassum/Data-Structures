#include<bits/stdc++.h>>
using namespace std;
#define STACK_MAX 100

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s,int item)
{

    if(s->top<STACK_MAX)
    {
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else
    {
        cout<<"Stack is full!!"<<endl;
    }

}
int pop(Stack *s)
{
    int item;
    if(s->top==0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
    {
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;

}
void print(Stack *s)
{
    int i=s->top-1;
    while(i!=-1)
    {
        cout<<s->data[i]<<' ';
        --i;
    }
    cout<<endl;
}

int main()
{
    Stack my_stack;

    my_stack.top=0;

    push(&my_stack,1);
    push(&my_stack,2);
    push(&my_stack,3);
    print(&my_stack);

    cout<<pop(&my_stack)<<endl;
    cout<<pop(&my_stack)<<endl;
    cout<<pop(&my_stack)<<endl;

}
