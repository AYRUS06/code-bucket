/*ADALINE*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int x[4][2], tar[4];
    float wc[2], w[2], e = 0, er = 0, yin = 0, alp = 0.5, b = 0, bc = 0, t = 0;
    int i, j, k, q = 1;

    for (i = 0; i <= 3; i++)
    {
        printf("\nEnter the %d row and target\t", i);

        for (j = 0; j <= 1; j++)
        {
            scanf("%d", &x[i][j]);
        }

        scanf("%d", &tar[i]);
        printf("%d", tar[i]);
        w[i] = 0.0;
        wc[i] = 0.0;
    }

mew:
    er = 0;
    e = 0;
    yin = 0;
    printf("\n ITERATION%d", q);
    printf("\n------------------");

    for (i = 0; i <= 3; i++)
    {
        t = tar[i];
        for (j = 0; j <= 1; j++)
        {
            yin = yin + x[i][j] * w[j];
        }

        b = b + bc;
        yin = yin + b;
        bc = 0.0;
        printf("\nNet=%f\t", yin);
        e = (float)tar[i] - yin;
        yin = 0.0;
        printf("Error=%f\t", e);
        printf("Target=%d\t\n", tar[i]);
        er = er + e * e;

        for (k = 0; k <= 1; k++)
        {
            wc[k] = x[i][k] * e * alp;
            w[k] += wc[k];
            wc[k] = 0.0;
        }

        printf("Weights \t");
        for (k = 0; k <= 1; k++)
        {
            printf("%f\t", w[k]);
        }

        bc = e * alp;
        printf("b=%.2f\t", b);
        printf("\n Error Square=%f", er);

        if (er <= 1.000)
        {
            printf("\n");
            for (k = 0; k <= 1; k++)
                printf("%f\t", w[k]);
        }
        else
        {
            e = 0;
            er = 0;
            yin = 0;
            q = q + 1;
            goto mew;
        }
    }

    return 0;
}