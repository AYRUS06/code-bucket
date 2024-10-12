#include<stdio.h>
#include<stdlib.h>
int x=10;

int main()
{
    static int x=10;
    x+=f1()+f2()+f3()+f1();
    printf("%d",x);
    return 0;
}
int f1()
{static int x=25;x++;return x;}
int f2()
{
    int x=50;x++;return x;
}
int f3()
{
    x*=10;
    return x;
}