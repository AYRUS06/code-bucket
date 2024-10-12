#include<stdio.h>
#include<stdlib.h>


  
  struct ListNode {
     int val;
     struct ListNode *next;
  };



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
    int k=0;
    while(l1->next==NULL || l2->next==NULL)
    {
         k=l1->val+l2->val;
        if(k>9)
        {
            l3->val=k%10;
            k=k/10;
        }
        else
        {
            l3->val=k
        }
        l1=l1->next;l2=l2->next,l3=l3->next;
    }
}
int main()
{
    
}