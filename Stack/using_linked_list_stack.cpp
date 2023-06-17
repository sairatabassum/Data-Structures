#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;


struct node
{
    int data;
    Node *next;
}*top=NULL;

void push(int item)
{

    Node *new_node=(Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {
        cout<<"Can not create a new node"<<endl;
        exit(1);
    }

    new_node->data=item;
    new_node->next=top;
    top=new_node;



}

void pop()
{

    if(top==NULL)
    {

        cout<<"Stack is empty"<<endl;

    }
    Node *node;
    node=top;
    top=top->next;
    free(node);



}


int main()
{

    push(1);
    push(2);
    push(3);
    pop();

    while(top!=NULL)
    {
        cout<<top->data<<' ';
        top=top->next;
    }
}
