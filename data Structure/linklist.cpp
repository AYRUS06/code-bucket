#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
class linkedlist
{
private:
    node *first;

public:
    linkedlist() { first = NULL; }
    linkedlist(int a[], int n);
    ~linkedlist();
    void display();
    void insert(int index, int x);
    int Delete(int x);
    int Length();
};
linkedlist::linkedlist(int a[], int n)
{
    node *t, *last;
    int i = 0;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
linkedlist::~linkedlist()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void linkedlist::display()
{
    node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int linkedlist::Length()
{
    int i = 0;
    node *p = first;
    while (p)
    {
        i++;p=p->next;
    }
    return i;
}
void linkedlist::insert(int index, int x)
{
    node *p = first;
    node *t;
    if (index < 0 || index > Length())
        cout<<"nothing to be done out of bounds"<<endl;
        else{
    t = new node;
    t->data = x;
    t->next = NULL;
    if (index == 0)
    {
        t->next = first;
        first = t;
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
int linkedlist::Delete(int index)
{
    node *p = first; int x;
    node *t = NULL;
    if (index < 1 || index > Length())
        return -1;
    if (index == 1)
    {
        first = first->next;
        x=p->data;
        delete p;
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            t = p;
            p = p->next;
        }
        t->next = p->next;

       x = t->data;
        delete p;
    }
    return x;
}
int main()
{
    int a[8]={2,6,7,2,9,27,1,6};
    linkedlist l(a,8);
    l.display();
    l.insert(2,5);
    l.display();
    cout<<l.Delete(5)<<endl;
    cout<<l.Length()<<endl;
    l.display();
    return 0;
}