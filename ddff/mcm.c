#include <stdio.h>
#include <stdlib.h>
void printOptimalPattern(int x, int y, int **s)
{
    // for(int i=1;i<=x;i++)
    // {

    //     for(int j=i+1;j<=y;j++)
    //     printf(" i: %d j: %d value=%d;",i,j,s[i][j]);
    //     printf("\n");
    // }
    // printf("i: %d  j: %d\n",i,j);
    if (x == y)
        printf("A%d ", x);
    //  x=1;
    else
    {
        // printf("( i: %d j: %d s[i][j]: %d\n ",x,y,s[x][y]);
        printf("(");
        printOptimalPattern(x, s[x][y], s);
        printOptimalPattern(s[x][y] + 1, y, s);
        printf(")");
    }
}
void matrixMultiply(int *p, int n)
{
    int i, j, k, l;
    // int m[n + 1][n + 1], s[n][n + 1];
    int m[n + 1][n + 1];
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            m[i][j] = 0;
        }
    }
    int **s;
    s = (int **)malloc((n + 1) * sizeof(int));
    for (i = 0; i < n; i++)
        s[i] = malloc((n) * sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j <= n; j++)
            s[i][j] = 0;

    for (l = 2; l <= n; l++) // length of the matrix chain
    {
        for (i = 1; i <= n - l + 1; i++) // starting matrix in the matrix chain
        {
            /*
            Total matrix chains of length l = number of ways to choose l consecutive numbers in n elements
            Therefore, number of chains possible=n-l+1
            */
            j = i + l - 1; // last matrix in the chain
            m[i][j] = __INT_MAX__;
            for (k = i; k <= j - 1; k++) // position after  which divider can be put to divide in two parts
            {
                // printf("multiply: %d\n",(p[i - 1] * p[k] * p[j]));
                int q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);
                if (q < m[i][j])
                {

                    m[i][j] = q; // minimum number of operations required to multiply matrix i to matrix j
                    s[i][j] = k; // position at which the divison is to be made
                    //printf("i: %d  j: %d q: %d s[i][j]: %d\n", i, j, q, s[i][j]);
                }
            }
        }
    }
    // for (i = 1; i < n; i++)
    // {

    //     for (j = i + 1; j <= n; j++)
    //         printf(" i: %d j: %d value=%d;", i, j, s[i][j]);
    //     printf("\n");
    // }
    printf("Minimum operations required: %d\n",m[1][n]);
    printOptimalPattern(1, n, s);
}
int main()
{
    int n; // number of matrix
    printf("Enter the number of matrices: ");
    scanf("%d", &n);
    int *p = malloc((n+1) * sizeof(int));
    // int *p = {30, 35, 15, 5, 10, 20, 25};
    printf("\nEnter %d array values:\n", n + 1);
    for (int i = 0; i <= n; i++)
        scanf("%d ", &p[i]);
    matrixMultiply(p, n);
}



































/*MATRIX-CHAIN-ORDER (p)


 1. n   length[p]-1
 2. for i ← 1 to n
 3. do m [i, i] ← 0
 4. for l ← 2 to n    // l is the chain length
 5. do for i ← 1 to n-l + 1
 6. do j ← i+ l -1
 7. m[i,j] ←  ∞
 8. for k  ← i to j-1
 9. do q  ← m [i, k] + m [k + 1, j] + pi-1 pk pj	
 10. If q < m [i,j]
 11. then m [i,j] ← q
 12. s [i,j] ← k
 13. return m and s.      


 PRINT-OPTIMAL-PARENS (s, i, j)
 1. if i=j
 2. then print "A"
 3. else print "("
 4. PRINT-OPTIMAL-PARENS (s, i, s [i, j])
 5. PRINT-OPTIMAL-PARENS (s, s [i, j] + 1, j)
 6. print ")"*/
