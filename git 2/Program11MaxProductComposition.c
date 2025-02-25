#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#define product(x, y) ((x) * (y))
struct SET
{
    float nr[5];
    float dr[5];
    int n;
};
typedef struct SET fuzzy;
void printval(fuzzy *m, char *x)
{
    int i;
    printf("\n %s={", x);
    for (i = 0; i < m->n; i++)
    {
        printf(" %5.2f /%5.2f ", m->nr[i], m->dr[i]);
        if (i != m->n - 1)
            printf("+");
    }
    printf(" }");
}
void main()
{
    fuzzy V, I, C;
    int i, j, k, prows, pcols, trows, tcols;
    float P[6][6], T[6][4], E[6][4], max;
    V.n = I.n = 5;
    C.n = 3;
    V.nr[0] = 0.2;
    V.dr[0] = 30;
    V.nr[1] = 0.8;
    V.dr[1] = 45;
    V.nr[2] = 1;
    V.dr[2] = 60;
    V.nr[3] = 0.9;
    V.dr[3] = 75;
    V.nr[4] = 0.7;
    V.dr[4] = 90;
    I.nr[0] = 0.4;
    I.dr[0] = 0.8;
    I.nr[1] = 0.7;
    I.dr[1] = 0.9;
    I.nr[2] = 1;
    I.dr[2] = 1;
    I.nr[3] = 0.8;
    I.dr[3] = 1.1;
    I.nr[4] = 0.6;
    I.dr[4] = 1.2;
    C.nr[0] = 0.4;
    C.dr[0] = 0.5;
    C.nr[1] = 1;
    C.dr[1] = 0.6;
    C.nr[2] = 0.5;
    C.dr[2] = 0.7;
    printval(&V, "V");
    printval(&I, "I");
    printval(&C, "C");
    printf("\n");
    for (i = 0; i <= V.n; i++)
        for (j = 0; j <= I.n; j++)
        {
            if (i == 0 && j > 0)
                P[i][j] = I.dr[j - 1];
            else if (j == 0 && i > 0)
                P[i][j] = V.dr[i - 1];
            else if (i > 0 && j > 0)
                P[i][j] = fmin(V.nr[i - 1], I.nr[j - 1]);
        }
    for (i = 0; i <= I.n; i++)
        for (j = 0; j <= C.n; j++)
        {
            if (i == 0 && j > 0)
                T[i][j] = C.dr[j - 1];
            else if (j == 0 && i > 0)
                T[i][j] = I.dr[i - 1];
            else if (i > 0 && j > 0)
                T[i][j] = fmin(I.nr[i - 1], C.nr[j - 1]);
        }
    for (i = 0; i <= V.n; i++)
    {
        for (j = 0; j <= I.n; j++)
        {
            if (i == 0 && j == 0)
                printf(" ");
            else
                printf(" %6.2f ", P[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i <= I.n; i++)
    {
        for (j = 0; j <= C.n; j++)
        {
            if (i == 0 && j == 0)
                printf(" ");
            else
                printf(" %6.2f ", T[i][j]);
        }
        printf("\n");
    }
    prows = 6, pcols = 6;
    trows = 6, tcols = 4;
    for (i = 0; i < prows; i++)
    {
        for (j = 0; j < tcols; j++)
        {
            if (i == 0 && j == 0)
                E[i][j] = 0;
            else if (i == 0 && j > 0)
                E[i][j] = T[i][j];
            else if (i > 0 && j == 0)
                E[i][j] = P[i][j];
            else
            {
                max = 0;
                for (k = 1; k < pcols; k++)
                {
                    if (i > 0 && j > 0)
                        if (max < product(P[i][k], T[k][j]))
                            max = product(P[i][k], T[k][j]);
                }
                if (i > 0 && j > 0)
                    E[i][j] = max;
            }
        }
    }
    printf("\n");
    for (i = 0; i < prows; i++)
    {
        for (j = 0; j < tcols; j++)
        {
            if (i == 0 && j == 0)
                printf(" ");
            else
                printf(" %6.2f ", E[i][j]);
        }
        printf("\n");
    }
}
