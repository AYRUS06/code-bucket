#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int size;
    int *Q;
};

void create(struct queue *q, int x)
{
    q->size = x;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(struct queue *q, int x)
{
    if (q->rear == q->size - 1)
        printf("Queue overflow\n");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    printf("Queue underflow\n");
    else
    {q->front++;
     x=q->Q[q->front];    
    }
    return x;
}
void display(struct queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    printf("%d ",q.Q[i]);
    printf("\n");
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,2);
    enqueue(&q,5);
enqueue(&q,1);
enqueue(&q,22);
enqueue(&q,7);
enqueue(&q,3);
display(q);
printf("%d ",dequeue(&q));
//display(q);
}