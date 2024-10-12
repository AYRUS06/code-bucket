#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;
void create(int a[], int n)
{
    head = (struct node *)malloc(sizeof(struct node));
    struct node *last, *t;
    head->data = a[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    p = head;
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
    printf("\n");
}
void recursivedisplay(struct node *p)
{
    static int f = 0;
    if (p != head || f == 0)
    {
        f = 1;
        printf("%d ", p->data);
        recursivedisplay(p->next);
    }
    f = 0;
}
int length(struct node *p)
{
    int i = 1;
    p = head;
    do
    {
        i++;
        p = p->next;
    } while (p != head);
    return i;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    if (index < 0 || index > length(head))
        printf("index out of bound");
    else
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->next = NULL;
        if (index == 0)
        {
            if (head == NULL)
            {
                head = t;
                head->next = head;
            }
            else
            {
                while (p->next != head)
                    p = p->next;
                p->next = t;
                head = t;
            }
        }
        else
        {

            for (int i = 0; i < index - 1; i++)
            {
                p = p->next;
            }
            t->next = p->next;
            p->next = t;
        }
    }
}
int Delete(struct node *p, int index)
{
    struct node *q;
    int x = 0;
    if (index < 0 || index > length(p))
        return 0;
    else
    {
        if (index == 1)
        {
            while (p->next != head)
                p = p->next;
            x = head->data;
            if (head == p)
            {
                free (head);
                head = NULL;
            }
            else
            {
                p->next = head->next;
                free (head);
                head = p->next;
            }
        }
        else
        {
            for (int i = 0; i < index - 2; i++)
                p = p->next;
            q = p->next;
            p->next = q->next;
            x = q->data;
            free (q);
        }
        return x;
    }
}
int main()
{
    int a[6] = {2, 7, 4, 9, 1, 5};
    create(a, 6);
    // display(head);
    recursivedisplay(head);
    insert(head, 3, 6);
    printf("\n");
    display(head);
    printf("\n %d\n",Delete(head,5));
    display(head);
     return 0;
}