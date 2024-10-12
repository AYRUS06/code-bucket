#include <stdio.h>
#define S 50

int main()
{
    int n, i;
    float x[S], y[S], sumx = 0, sumx2 = 0, sumy = 0, sumxy = 0;
    printf("How many data points: ");
    scanf("%d", &n);
    printf("Enter data: \n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d]=", i + 1);
        scanf("%f", &x[i]);
        printf("y[%d]=", i + 1);
        scanf("%f", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sumx += x[i];
        sumx2 += x[i] * x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
    }
    float b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumy);
    float a = (sumy - b * sumx) / n;
    printf("\nThe slope is %f and the y-intercept is %f\n", a, b);
    return 0;
}