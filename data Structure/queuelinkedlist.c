#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*front=NULL,*rear=NULL;
void enqueue(int x )
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    printf("queue is full\n");
    else
    {
       t->data=x;
       t->next=NULL;
       if(front==NULL)
       front =rear=t;
       else
       {
           rear->next=t;
           rear=t;
        }
    }
}
int dequeue()
{
    int x=-1;
    struct node *t;
    if(front==NULL)
    printf("queue is empty\n");
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void display()
{
    struct node *p=front;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(23);
    enqueue(43);
    enqueue(2);
    enqueue(53);
    display();
    printf("%d \n",dequeue());
    display();
}