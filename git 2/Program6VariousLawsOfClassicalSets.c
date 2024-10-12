#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// intialiase arr to zero
void arr_zero(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = 0;
    return;
}
// Function to check if a given element belongs to a set
bool belongsTo(int x, int set[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (set[i] == x)
        {
            return true;
        }
    }
    return false;
}
int compare(const void *num1, const void *num2) // comparing function
{
    int a = *(int *)num1;
    int b = *(int *)num2;
    if (a > b)
    {
        return 1;
    }
    else if (a < b)
    {
        return -1;
    }
    return 0;
}
// Function to print the elements of a set
void printSet(int set[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%d", set[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf("}");
}
// function to reset set
int *reset(int setA[], int *sizeA)
{
    int valid_num = 0;
    for (int i = 0; i < *sizeA; i++)
    {
        if (setA[i] != 0)
            valid_num++;
    }
    int *new_set = (int *)malloc(valid_num * sizeof(int));
    arr_zero(new_set, valid_num);
    int k = 0;
    for (int i = 0; i < *sizeA; i++)
    {
        if (setA[i] != 0)
        {
            new_set[k++] = setA[i];
        }
    }

    int *ptr = new_set;
    *sizeA = valid_num;

    return ptr;
}
void complement(int setA[], int sizeA, int universal_set[], int sizeU, int *com_size, int com_set[])
{
    *com_size = sizeU - sizeA;
    int k = 0;
    for (int i = 0; i < sizeU; i++)
    {
        if (!belongsTo(universal_set[i], setA, sizeA))
            com_set[k++] = universal_set[i];
    }
}

// Function to perform union of two sets A and B
int *unionSets(int setA[], int sizeA, int setB[], int sizeB, int *sizeC)
{
    int maxSize = sizeA + sizeB;
    int *setC = (int *)malloc(maxSize * sizeof(int));
    arr_zero(setC, maxSize);
    int k = 0;
    for (int i = 0; i < sizeA; i++)
    {
        setC[k++] = setA[i];
    }
    for (int i = 0; i < sizeB; i++)
    {
        if (!belongsTo(setB[i], setA, sizeA))
        {
            setC[k++] = setB[i];
        }
    }

    int *ptrC = reset(setC, &maxSize);
    *sizeC = maxSize;

    return ptrC;
}

// Function to perform intersection of two sets A and B
int *intersectSets(int setA[], int sizeA, int setB[], int sizeB, int *sizeC)
{
    int maxSize = sizeA < sizeB ? sizeA : sizeB;
    int *setC = (int *)malloc(maxSize * sizeof(int));
    arr_zero(setC, maxSize);
    int k = 0;
    for (int i = 0; i < sizeA; i++)
    {
        if (belongsTo(setA[i], setB, sizeB))
        {
            setC[k++] = setA[i];
        }
    }

    int *ptrC = reset(setC, &maxSize);
    *sizeC = maxSize;
    return ptrC;
}

int main()
{
    // Declare and initialize the sets
    int setA[] = {1, 2, 3, 4};
    int setB[] = {2, 3, 4, 5};
    int setC[] = {3, 4, 5, 6};
    int universal_set[] = {1, 2, 3, 4, 5, 6};
    int sizeA = 4, sizeB = 4, sizeC = 4, sizeU = 6;

    // Verify DeMorgan's Law
    int com_size_A = 0;
    int com_A[sizeU - sizeA];
    complement(setA, sizeA, universal_set, sizeU, &com_size_A, com_A);

    int com_size_B = 0;
    int com_B[sizeU - sizeA];
    complement(setB, sizeB, universal_set, sizeU, &com_size_B, com_B);
    int LHS_size = 0;
    int *LHS = unionSets(com_A, com_size_A, com_B, com_size_B, &LHS_size);
    int RHS_size = 0;

    int *temp = intersectSets(setA, sizeA, setB, sizeB, &RHS_size);

    int RHS[sizeU - RHS_size];
    complement(temp, RHS_size, universal_set, sizeU, &RHS_size, RHS);

    printf("(A ∩ B)' = ");
    printSet(LHS, LHS_size);
    printf("\nA' U B' = ");
    printSet(RHS, RHS_size);
    printf("\n");
    qsort(LHS, LHS_size, sizeof(int), compare);
    qsort(RHS, RHS_size, sizeof(int), compare);
    bool demorgan = true;
    for (int i = 0; i < LHS_size; i++)
    {
        if (LHS_size != RHS_size)
        {
            demorgan = false;
            break;
        }
        if (LHS[i] != RHS[i])
        {
            demorgan = false;
            break;
        }
    }
    if (demorgan)
    {
        printf("DeMorgan's Law is verified.\n");
    }
    else
    {
        printf("DeMorgan's Law is not verified.\n");
    }

    // Verify Idempotent Law
    int *res4 = unionSets(setA, sizeA, setA, sizeA, &sizeA);
    printf("Idempotent Law: A U A = A\n");
    printf("A U A = ");
    printSet(res4, sizeA);
    printf("\n");
    bool idempotent = true;
    for (int i = 0; i < sizeA; i++)
    {
        if (!belongsTo(res4[i], setA, sizeA))
        {
            idempotent = false;
            break;
        }
    }
    if (idempotent)
    {
        printf("Idempotent Law is verified.\n");
    }
    else
    {
        printf("Idempotent Law is not verified.\n");
    }

    // Verify Associative Law
    int res_len = 0;
    int *res5 = unionSets(unionSets(setA, sizeA, setB, sizeB, &res_len), sizeA, setC, sizeC, &res_len);
    temp = unionSets(setB, sizeB, setC, sizeC, &sizeB);
    int *res6 = unionSets(setA, sizeA, temp, sizeB, &sizeA);
    printf("Associative Law: A U (B U C) = (A U B) U C\n");
    printf("A U (B U C) = ");
    printSet(res5, sizeA);
    printf("\n(A U B) U C = ");
    printSet(res6, sizeA);
    printf("\n");
    bool associative = true;
    for (int i = 0; i < sizeA; i++)
    {
        if (res5[i] != res6[i])
        {
            associative = false;
            break;
        }
    }
    if (associative)
    {
        printf("Associative Law is verified.\n");
    }
    else
    {
        printf("Associative Law is not verified.\n");
    }

    // Verify Distributive Law
    res_len = 0;
    temp = unionSets(setB, sizeB, setC, sizeC, &res_len);
    int *res7 = intersectSets(setA, sizeA, temp, sizeA, &res_len);
    int temp2_len = 0, temp3_len = 0;
    int *temp2 = intersectSets(setA, sizeA, setB, sizeB, &temp2_len);
    int *temp3 = intersectSets(setA, sizeA, setC, sizeC, &temp3_len);
    int *res8 = unionSets(temp2, temp2_len, temp3, temp3_len, &temp3_len);
    printf("Distributive Law: A ∩ (B U C) = (A ∩ B) U (A ∩ C)\n");
    printf("A ∩ (B U C) = ");
    printSet(res7, res_len);
    printf("\n(A ∩ B) U (A ∩ C) = ");
    printSet(res8, temp3_len);
    printf("\n");
    bool distributive = true;
    for (int i = 0; i < res_len; i++)
    {
        if (res7[i] != res8[i])
        {
            distributive = false;
            break;
        }
    }
    if (distributive)
    {
        printf("Distributive Law is verified.\n");
    }
    else
    {
        printf("Distributive Law is not verified.\n");
    }

    return 0;
}