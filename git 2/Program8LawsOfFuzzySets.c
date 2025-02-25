#include <stdio.h>
#include <stdlib.h>
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
    a.n = b.n = 3;
    a.nr[0] = 0.1;
    a.dr[0] = 1;
    a.nr[1] = 0.2;
    a.dr[1] = 2;
    a.nr[2] = 0.3;
    a.dr[2] = 3;
    b.nr[0] = 0.4;
    b.dr[0] = 1;
    b.nr[1] = 0.3;
    b.dr[1] = 2;
    b.nr[2] = 0.2;
    b.dr[2] = 3;
    printval(&a, "A");
    printval(&b, "B");
    printf("\n Menu:\n 1.AUB\n 2.A^B\n 3.A~\n 4.B~ \n 5.Print S,A,B\n 6.Exit");
    while (1)
    {
        switch ((ch = getch()))
        {
        case '1':
            ans = unionset(a, b);
            printval(&ans, "1.AUB");
            break;
        case '2':
            ans = intersect(a, b);
            printval(&ans, "2.A^B");
            break;
        case '3':
            ans = complement(a);
            printval(&ans, "3.A~");
            break;
        case '4':
            ans = complement(b);
            printval(&ans, "4.B~");
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