#include<bits/stdc++.h>
using namespace std;
#define Q_SIZE 5

typedef struct
{
    int data[Q_SIZE+1];
    int head,tail;
} Queue;

void enqueue(Queue *q, int item)
{

    if((q->tail+1)%(Q_SIZE+1)==q->head)
    {

        cout<<"Queue is full"<<endl;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Q_SIZE+1);

}

int dequeue(Queue *q)
{

    int item;

    if(q->tail==q->head)
    {
        cout<<"Queue is empty";
        return -1;
    }

    item=q->data[q->head];
    q->head=(q->head+1)%(Q_SIZE+1);
    return item;

}


int main()
{
    Queue myQueue;

    myQueue.head=0;
    myQueue.tail=0;

    enqueue(&myQueue,1);
    enqueue(&myQueue,2);
    enqueue(&myQueue,3);

    cout<<dequeue(&myQueue)<<endl;
    cout<<dequeue(&myQueue)<<endl;
    cout<<dequeue(&myQueue)<<endl;
    cout<<dequeue(&myQueue)<<endl;


}
