#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}
void preorder(struct  node *root)
{
    if(root!=NULL)
    {
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}
void postorder(struct  node *root)
{
    if(root)
    {
    postorder(root->left);
    postorder(root->right);
    
    printf("%d",root->data);
    }
}
void inorder(struct  node *root)
{
     if(root)
     {
    inorder(root->left);
   
    printf("%d",root->data);
    inorder(root->right);
     }
}

int main()
{
    struct node *p = createnode(2);
    struct node *p1 = createnode(4);
    struct node *p2 = createnode(9);
    struct node *p3 = createnode(11);
    struct node *p4 = createnode(5);
    struct node *p5 = createnode(7);
    struct node *p6 = createnode(8);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    preorder(p);
    printf("\n");
    postorder(p);
  printf("\n");
    inorder(p);
    return 0;
}