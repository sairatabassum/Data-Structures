#include<bits/stdc++.h>>
using namespace std;
#define MAX 4

int stack_arr[MAX],top=0;

void push(int item)
{

    if(top>=MAX)
    {
        cout<<"Stack is full"<<endl;

    }
    else
    {
        stack_arr[top]=item;
        top=top+1;

    }


}

int pop()
{
    int item;
    if(top==0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }

    item=stack_arr[top-1];
    top=top-1;
    return item;

}

void print()
{
    for(int i=top-1; i>=0; i--)
    {
        cout<<stack_arr[i]<<' ';
    }
    cout<<endl;

}

int main()
{

    push(1);
    push(2);
    push(3);
    print();
    push(4);
    push(5);
    print();
    pop();
    pop();
    push(6);
    print();




}
