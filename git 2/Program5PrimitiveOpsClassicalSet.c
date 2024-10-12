#include <stdio.h>

// Function to find the union of two sets
void set_union(int set1[], int set2[], int n1, int n2)
{
    int i, j, k, flag;
    int union_set[n1 + n2];

    // Copy set1 elements to the union set
    for (i = 0; i < n1; i++)
    {
        union_set[i] = set1[i];
    }

    // Check set2 elements and add to the union set if not already present
    k = n1;
    for (i = 0; i < n2; i++)
    {
        flag = 0;
        for (j = 0; j < n1; j++)
        {
            if (set2[i] == set1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            union_set[k++] = set2[i];
        }
    }

    // Print the union set
    printf("Union set: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", union_set[i]);
    }
    printf("\n");
}

// Function to find the intersection of two sets
void set_intersection(int set1[], int set2[], int n1, int n2)
{
    int i, j, k = 0;
    int intersection_set[n1];

    // Check set1 elements and add to the intersection set if present in set2
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                intersection_set[k++] = set1[i];
                break;
            }
        }
    }

    // Print the intersection set
    printf("Intersection set: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", intersection_set[i]);
    }
    printf("\n");
}

// Function to find the complement of set1 in set2
void set_complement(int set1[], int set2[], int n1, int n2)
{
    int i, j, k = 0;
    int complement_set[n2];

    // Check set2 elements and add to the complement set if not present in set1
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (set2[i] == set1[j])
            {
                break;
            }
        }
        if (j == n1)
        {
            complement_set[k++] = set2[i];
        }
    }

    // Print the complement set
    printf("Complement set: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", complement_set[i]);
    }
    printf("\n");
}

int main()
{
    int set1[] = {1, 2, 3, 4, 5};
    int set2[] = {3, 4, 5, 6, 7};
    int n1 = sizeof(set1) / sizeof(set1[0]);
    int n2 = sizeof(set2) / sizeof(set2[0]);

    set_union(set1, set2, n1, n2);
    set_intersection(set1, set2, n1, n2);
    set_complement(set1, set2, n1, n2);

    return 0;
}
