#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{
    struct node *last, *t;
    first=(struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    first->pre = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        t->pre = last;
        last = t;
    }
}
void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int length(struct node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    if (index < 0 || index > length(p))
        printf("index out of bounds!!\n");
    else
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->pre = t->next = NULL;
        if (index == 0)
        {
            if (first)
            {
                t->next = first;
                first->pre = t;
                first = t;
            }
            else
            {
                first = t;
            }
        }
        else
        {
            for (int i = 0; i < index - 2; i++)
                p = p->next;
            t->pre = p;
            t->next = p->next;
            if (p->next)
                p->next->pre = t;
            p->next = t;
        }
    }
}
int delete (struct node *p, int index)
{
    int x = 0;
    if (index < 1 || index > length(p))
        return 0;
    if (index == 1)
    {
        first = first->next;
        if (first)
            first->pre = NULL;
        x = p->data;
        free(p);
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        p->pre->next = p->next;
        if (p->next)
            p->next->pre = p->pre;
        x = p->data;
        free(p);
        return x;
    }
}
void reverse(struct node *p)
{
    struct node *t;
    while (p != NULL)
    {
        t = p->next;
        p->next = p->pre;
        p->pre = t;
        p = p->pre;
        if (p != NULL && p->next == NULL)
            first = p;
    }
}
int main()
{
    int a[6] = {2, 5, 8, 1, 0, 4};
    create(a, 6);
    display(first);
    insert(first, 3, 7);
    display(first);
    printf("%d \n", delete (first, 2));
    display(first);
    reverse(first);
    display(first);
    return 0;
}