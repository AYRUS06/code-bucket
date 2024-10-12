#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10;
    int *b=&a;
    printf("enter 1st  n0.\n");
    scanf("%d",b);
    printf("%d\n",a+65);
    printf("%c\n",97);
    printf("%d",'a');
    char c[]="gate2011";
    //printf("\n%s",c+c[3]-c[1]);
     //printf("\n%c",c+4);
    //printf("\n%c",*(c+4)); printf("\n%s",*(c+4));
   char *d="gopi gotohell";
   printf("\n%s",d);
   d[3]=0;
   printf("\n%s",d);
    return 0;
}