#include<stdio.h>

int main()
{
    char A[]="finding";
    int h[26]={};int i;
   for(i=0;A[i]!='\0';i++)
   {
       h[A[i]-97]+=1;
   }
   for(int i=0;i<26;i++)
   {
       if(h[i]>1)
       printf(" %c is %d times in %s \n",i+97,h[i],A);
   }
   return 0;
}