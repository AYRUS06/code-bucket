#include<stdio.h>
void printLCS(char x[], int m, int n,char b[][n+1])
{
    if(m==0||n==0)
    return;
    if(b[m][n]=='D')
    {
        printLCS(x,m-1,n-1,b);
        printf("%c",x[m]);
    }
    else if(b[m][n]=='U')
        printLCS(x,m-1,n,b);
    else
        printLCS(x,m,n-1,b);
}
int main()
{
    char x[]="ABCBDAB";
    char y[]="BDCABA";
    printf("x=%s y=%s\n",x,y);
    int m=sizeof(x)/sizeof(x[0]);
    int n=sizeof(y)/sizeof(y[0]);
    printf("m: %d n: %d\n",m,n);
    int c[m][n];
    char b[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        c[i][0]=0;
    }
    for(i=0;i<n;i++)
    {
        c[0][i]=0;
    }
    // for(i=0;i<=m;i++)
    // {
    //     printf(" i: %d val=%d, ",i,c[i][0]);
    // }
    // printf("\n");
    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='D';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='U';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='L';
            }
           // printf("i: %d j: %d val=%d, ",i,j,c[i][j]);
        }
        //printf("\n");
    }
    printf("Length of longest common subsequence: %d\n",c[m-1][n-1]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        printf("%c ",b[i][j]);
        printf("\n");
    }
    printf("\nLongest Common Subsequence is: ");
    printLCS(x,m-1,n-1,b);
}



















/*Suppose X and Y are the two given sequences  
Initialize a table of LCS having a dimension of X.length * Y.length  
XX.label = X  
YY.label = Y  
LCS[0][] = 0  
LCS[][0] = 0  
Loop starts from the LCS[1][1]  
Now we will compare X[i] and Y[j]  
   if X[i] is equal to Y[j] then  
     LCS[i][j] = 1 + LCS[i-1][j-1]  
     Point an arrow LCS[i][j]  
Else  
   LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1])  */