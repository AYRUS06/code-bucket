//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        vector<int> a;

        while (head)
        {
            a.push_back(head->data);
            head = head->next;
        }
        Node *t = new Node(0);
        int n = a.size();
        if (k < n)
            t->data = a[k];
        else if (k == n)
            t->data = a[k - 1];
        t->next = NULL;
        Node *p = t;
        if (k == n)
        {
            for (int i = 0; i < k - 1; i++)
            {
                Node *q = new Node(0);
                q->data = a[i];
                q->next = NULL;
                t->next = q;
                t = q;
            }
        }
        else if (k < n)
        {
            for (int i = k + 1; i < n; i++)
            {
                Node *q = new Node(0);
                q->data = a[i];
                q->next = NULL;
                t->next = q;
                t = q;
            }
            for (int i = 0; i < k; i++)
            {
                Node *q = new Node(0);
                q->data = a[i];
                q->next = NULL;
                t->next = q;
                t = q;
            }
        }
    }
    return p;
}

;

//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val, k;
        cin >> n;

        cin >> val;
        Node *head = new Node(val);
        Node *tail = head;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> val;
            tail->next = new Node(val);
            tail = tail->next;
        }

        cin >> k;

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends