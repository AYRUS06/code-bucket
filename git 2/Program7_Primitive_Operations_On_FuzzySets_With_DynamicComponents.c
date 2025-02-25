#include <stdio.h>
#include <stdlib.h>
struct SET
{
    float nr[5];
    float dr[5];
    int n;
};
typedef struct SET fuzzy;
void getval(fuzzy *m, char *x)
{
    int i;
    float f;
    printf("\n Enter the %s:\n", x);
    for (i = 0; i < m->n; i++)
    {
        printf(" Numerator Element %d :", i + 1);
        scanf("%f", &f);
        m->nr[i] = f;
        fflush(stdin);
        printf(" Denominator Element %d:", i + 1);
        scanf("%f", &f);
        m->dr[i] = f;
    }
}
void printval(fuzzy *m, char *x)
{
    int i;
    printf("\n %s={", x);
    for (i = 0; i < m->n; i++)
    {
        printf(" %6.2f / %6.2f", m->nr[i], m->dr[i]);
        if (i != m->n - 1)
            putchar('+');
    }
    printf(" }");
}
fuzzy unionset(fuzzy a, fuzzy b)
{
    fuzzy temp;
    char ch;
    int i;
    temp.n = a.n;
    for (i = 0; i < a.n; i++)
    {
        if (a.dr[i] != b.dr[i])
        {
            printf("\n Denominators not equal");
            exit(0);
        }
        if (a.nr[i] < b.nr[i])
            temp.nr[i] = b.nr[i];
        else
            temp.nr[i] = a.nr[i];
        temp.dr[i] = a.dr[i];
    }
    return temp;
}
fuzzy intersect(fuzzy a, fuzzy b)
{
    fuzzy temp;
    int i;
    temp.n = a.n;
    for (i = 0; i < a.n; i++)
    {
        if (a.dr[i] != b.dr[i])
        {
            printf("\n Denominators not equal");
            exit(0);
        }
        if (a.nr[i] > b.nr[i])
            temp.nr[i] = b.nr[i];
        else
            temp.nr[i] = a.nr[i];
        temp.dr[i] = a.dr[i];
    }
    return temp;
}
fuzzy complement(fuzzy a)
{
    fuzzy temp;
    int i;
    temp.n = a.n;
    for (i = 0; i < a.n; i++)
    {
        temp.nr[i] = 1 - a.nr[i];
        temp.dr[i] = a.dr[i];
    }
    return temp;
}
void main()
{
    fuzzy a, b, ans;
    char ch;
    printf("\n Enter the no of componets:");
    scanf("%d", &a.n);
    b.n = a.n;
    getval(&a, "A");
    getval(&b, "B");
    printval(&a, "A");
    printval(&b, "B");
    while (1)
    {
        printf("\n Menu:\n 1.AUB\n 2.A^B\n 3.A~\n 4.B~ \n 5.Print S,A,B\n 6.Exit");
        switch ((ch = getch()))
        {
        case '1':
            ans = unionset(a, b);
            printval(&ans, "AUB");
            break;
        case '2':
            ans = intersect(a, b);
            printval(&ans, "A^B");
            break;
        case '3':
            ans = complement(a);
            printval(&ans, "A~");
            break;
        case '4':
            ans = complement(b);
            printval(&ans, "B~");
            break;
        case '5':
            printval(&a, "A");
            printval(&b, "B");
            break;
        case '6':
            exit(0);
        }
    }
}
