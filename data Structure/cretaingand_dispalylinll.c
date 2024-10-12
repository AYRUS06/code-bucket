#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * first, *third, *second, *laste;

void create(int a[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create2(int a[], int n)
{
    struct node *t, *last2;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = a[0];
    second->next = NULL;
    last2 = second;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last2->next = t;
        last2 = t;
    }
}

void display(struct node *p)
{
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void recursivetraverse(struct node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        recursivetraverse(p->next);
    }
}
void countnodes(struct node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count += 1;
        p = p->next;
    }
    printf("\n %d", count);
}
int countnodesrecursively(struct node *p)
{
    if (p)
        return 1 + (countnodesrecursively(p->next));
    else
        return 0;
}
void sum_of_nodes(struct node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    printf("\n %d", sum);
}
int sum_of_nodes_recursion(struct node *p)
{
    if (p)
        return sum_of_nodes_recursion(p->next) + p->data;
    else
        return 0;
}
void max_node(struct node *p)
{
    int max = -32678;
    while (p)
    {
        if (p->data >= max)
            max = p->data;
        p = p->next;
    }
    printf("\n %d", max);
}
int max_node_recursive(struct node *p)
{
    int x = 0;
    if (p == 0)
        return -32678;
    x = max_node_recursive(p->next);
    return x >= p->data ? x : p->data;
}
struct node *search(struct node *p, int key)
{
    while (p)
    {
        if (p->data == key)
            return p;
        else
            p = p->next;
    }
    return NULL;
}
struct node *search_recursive(struct node *p, int key)
{
    if (p == NULL)
        return NULL;
    else if (p->data == key)
        return p;
    search_recursive(p->next, key);
}
void insertion(struct node *p, int pos, int val)
{
    struct node *t;
    if (pos == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = val;
        t->next = first;
        first = t;
    }
    else
    {
        t = (struct node *)malloc(sizeof(struct node));
        for (int i = 0; i < pos - 1 && p; i++)
            p = p->next;
        t->data = val;
        t->next = p->next;
        p->next = t;
    }
}
void insert_at_last(int x)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = laste = NULL;
    else
    {
        laste->next = t;
        laste = t;
    }
}
void sorted_insert(struct node *p, int x)
{
    struct node *t, *q = NULL;
    t->data = x;
    t->next = NULL;
    q = NULL;
    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
void delete_node(struct node *p, int pos)
{
    struct node *q;
    q = NULL;
    int x = -1;
    int i;

    if (first == NULL || pos < 1 || pos > countnodesrecursively(p))
    {
        printf("\n There is nothing to be deleted the list is empty or the psoition you have entered is out of bound");
    }
    else if (pos == 1)
    {
        q = first;
        first = first->next;
        x = q->data;
        free(q);
    }
    else
    {
        for (i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }
}
int check_sorted(struct node *p)
{
    int x = -32768;
    while (p)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}
void RemoveDuplicate(struct node *p)
{
    struct node *q = p->next;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
void Reverse3(struct node *q, struct node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}
void merge(struct node *p, struct node *q)
{
    struct node *last;
    if (p->data <= q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p != NULL)
    {
        last->next = p;
    }
    if (q != NULL)
    {
        last->next = q;
    }
}
int isLoop(struct node *f)
{
    struct node *p, *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
        return 1;
    else
        return 0;
}
int main()
{
    int a[6] = {11, 9, 7, 3, 5, 1};

    create(a, 6);
    display(first);
    recursivetraverse(first);
    countnodes(first);
    printf("\n %d", countnodesrecursively(first));
    sum_of_nodes(first);
    printf("\n %d", sum_of_nodes_recursion(first));
    max_node(first);
    printf("\n %d", max_node_recursive(first));
    printf("\n %d", search(first, 54));
    printf("\n %d \n", search_recursive(first, 54));
    insertion(first, 5, 43);
    display(first);
    delete_node(first, 3);
    display(first);
    // sorted_insert(first,654);
    //display(first);
    check_sorted(first) > 0 ? printf(" list is sorted") : printf(" list is not Sorted");
    RemoveDuplicate(first);
    printf("\n");
    display(first);
    Reverse3(NULL, first);
    display(first);
    int c[6] = {1, 3, 5, 7, 9, 11};
    create(c, 6);
    int b[7] = {2, 4, 6, 8, 10, 12, 14};
    create2(b, 7);
    merge(first, second);
    recursivetraverse(third);
    isLoop(first) == 1 ? printf("\n it is a loop") : printf("\n it is not a loop");
    return 0;
}