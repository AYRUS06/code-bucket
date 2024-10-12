#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main()
{
    int n = 15;
    int arr[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }
    int min, max, i;
    if (n % 2 != 0)
    {
        i = 1;
    }
    else
    {
        i = 0;
    }
    min = arr[0];
    max = arr[0];
    for (; i <= n - 1; i = i + 2)
    {
        int x = arr[i];
        int y = arr[i + 1];
        if (x < y)
        {
            if (x < min)
                min = x;
            if (y > max)
                max = y;
        }
        else
        {
            if (y < min)
                min = y;
            if (x > max)
                max = x;
        }
    }
    printf("\nMaximum %d Minimum %d", max, min);
}