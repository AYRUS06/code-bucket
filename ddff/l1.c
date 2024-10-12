#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    double tim;
    int n = 6;
    int arr[] = {31, 43, 59, 26, 41, 58};
    int i, j, key;
    int x = 0;
    printf("\n");
    clock_t begin, end;
    begin = clock();
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        printf(" key: %d ", key);
        while (++x && j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            printf("key: %d i: %d j: %d  ", key, i, j);
            for (int a = 0; a < n; a++)
            {
                printf("%d ", arr[a]);
            }
            printf("\n");
        }
        arr[j + 1] = key;
        printf("i: %d j: %d  ", i, j);

        for (int a = 0; a < n; a++)
        {
            printf("%d ", arr[a]);
        }
        printf("\n");
    }
    end = clock();
    printf("\n\nsorted array is ");
    for (i = 0; i < n; i++)
    {
        printf("key: %d ", arr[i]);
    }
    tim = ((double)(end - begin));
    printf("\ntime taken for function() %li miliseconds.\n", (long int)tim);
    printf("%d ", x);
    return 0;
}