#include<stdio.h>

int main()
{
    char a[]= "finding";
    int h[26]={0};

    for(int i=0;a[i]!='\0';i++)
    {
        int x= a[i];
        h[x-97]+=1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (h[i]>1)
        {
            printf("%c: %d\n",i+97,h[i]);
        }
    }
    return 0;
    
}