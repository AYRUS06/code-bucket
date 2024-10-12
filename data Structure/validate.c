#include<stdio.h>

int valid(char *n)
{ for(int i=0;n[i]!='\0';i++)
{
    if(!(n[i]>=65&&n[i]<=90)&&!(n[i]>=97&&n[i]<=122)&&!(n[i]>=47&&n[i]<=57))
     return 0;
}
return 1;

}
int main()
{
    char *name="ANil123";
    char *n1="asd@#24";
    int a1=valid(name);
    int a2=valid(n1);
    if(a1==1&&a2==1)
      printf("both strings are valid");
    else if(a1==1&&a2==0)
       printf("string %s is valid only",name);
     else if(a2==1&&a1==0)
       printf("string %s is valid only",n1);  
    else
      printf("None of both string is valid");
}
