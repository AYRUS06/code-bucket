#include <stdio.h>
int fun(int n)
{
static int x=0;//once static variable increased it reamins same.
if(n>0)
{
x++;
return fun(n-1)+x;
}
return 0;
}
int main() {
int r;
r=fun(5);//in this recursion x value get increased to 5 only.
printf("%d\n",r);
r=fun(5);//in this recursion it further increase from 5 to 10.
printf("%d\n",r);
return 0;
}