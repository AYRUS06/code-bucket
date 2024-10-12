#include<stdio.h>
int main()
{
    int i=-1;int j=0;int k=-1;int l=2;int m;
    m=((l++)||(i++&&j++&&k++));
    printf("%d %d %d %d %d\n",i,j,k,l,m);
    int a=5;
    printf("%d %d %d",++a,++a,++a);
    return 0;
}