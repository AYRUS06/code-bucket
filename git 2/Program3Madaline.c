// // XOR function using madaline
// #include <stdio.h>
// void main()
// {
//     signed int x[4][2], tar[4];
//     float w[2][2], a, o[2];
//     float
//         wc[2][2],
//         zin[2], z1 = 0, z2 = 0, yin = 0, b[2], er = 0, b3 = 0.5, v1 = 0.5, v2 = 0.5;
//     int i, j, c = 0, in, d;
//     float bc[2];
//     float alp = 0.5;
//     for (i = 0; i <= 3; i++)
//     {
//         printf("Enter the %d row & target:",i);
//         for (j = 0; j <= 1; j++)
//             scanf("%d", &x[i][j]);
//         scanf("%d", &tar[i]);
//     }
//     printf("Enter Weights:");
//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             printf("Enter weight: %d\n",j);
//             scanf("%f", &a);
//             w[i][j] = a;
//             wc[i][j] = 0;
//         }
//         printf("bias: ");
//         scanf("%f", &b[i]);
//         zin[i] = 0;
//     }
// mew:
//     printf("Iteration\n");
//     printf("--------------\n");
//     for (i = 0; i <= 3; i++)
//     {
//         for (in = 0; in <= 1; in++)
//         {
//             for (j = 0; j <= 1; j++)
//             {
//                 zin[in] += x[i][j] * w[j][c];
//             }
//             zin[in] += b[in];
//             printf("zin%d= %.3f\t", in, zin[in]);
//             c += 1;
//         }
//         c = 0;
//         d = 1;
//         if (zin[c] >= 0 & zin[d] >= 0)
//             z1 = z2 = 1;
//         else if (zin[c] >= 0 & zin[d] <= 0)
//         {
//             z1 = 1;
//             z2 = -1;
//         }
//         else if (zin[c] <= 0 & zin[d] >= 0)
//         {
//             z1 = -1;
//             z2 = 1;
//         }
//         else
//         {
//             z1 = z2 = -1;
//         }
//         yin = z1 * v1 + z2 * v2 + b3;
//         printf("NET %.3f\t", yin);
//         for (in = 0; in <= 1; in++)
//         {
//             o[in] = tar[i] - zin[in];
//             er += o[in] * o[in];
//             zin[in] = 0;
//         }
//         if (yin == tar[i])
//         {
//             for (in = 0; in <= 1; in++)
//             {
//                 for (j = 0; j <= 1; j++)
//                 {
//                     wc[in][j] = 0;
//                     w[in][j] += wc[in][j];
//                 }
//                 bc[in] = 0;
//             }
//             yin = 0;
//         }
//         else
//         {
//             for (in = 0; in <= 1; in++)
//             {
//                 for (j = 0; j <= 1; j++)
//                 {
//                     wc[in][j] = alp * o[j] * x[i][in];

//                     printf("wc%d%d=%.3f\t", in, j, wc[in][j]);
//                     w[in][j] += wc[in][j];
//                     printf("w=%.3f\t", w[in][j]);
//                     wc[in][j] = 0;
//                 }
//             }
//             for (in = 0; in <= 1; in++)
//             {
//                 bc[in] = alp * o[in];
//                 b[in] += bc[in];
//                 printf("\nb%d=%.3f", in, b[in]);
//             }
//             for (in = 0; i <= 1; in++)
//             {
//                 bc[in] = 0;
//             }
//             yin = 0;
//         }
//         printf("\n");
//     }
//     printf("Error: %d",er);
//     if (er <= 0.1)
//     {
//         for (i = 0; i <= 1; i++)
//         {
//             for (j = 0; j <= 1; j++)
//                 printf("%.3f", w[i][j]);
//         }
//     }
//     else
//     {
//         yin = 0;
//         for (in = 0; in <= 1; in++)
//         {
//             bc[in] = 0;
//             zin[in] = 0;
//         }
//         er = 0;
//         goto mew;
//     }
// }
// XOR function using madaline
#include <stdio.h>
#include <conio.h>
void main()
{
    signed int x[4][2], tar[4];
    float w[2][2], a, o[2];
    float wc[2][2], zin[2], z1 = 0, z2 = 0, yin = 0, b[2], er = 0, b3 = 0, v1 = 0, v2 = 0.5;
    int i, j, c = 0, in, d;
    float bc[2];
    float alp = 0.5;
    for (i = 0; i <= 3; i++)
    {
        printf("Enter the %d row & target:", i);
        for (j = 0; j <= 1; j++)
            scanf("%d", &x[i][j]);
        scanf("%d", &tar[i]);
    }
    printf("Enter Weights:");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            scanf("%f", &a);
            w[i][j] = a;
            wc[i][j] = 0;
        }
        printf("bias");
        scanf("%f", &b[i]);
        zin[i] = 0;
    }
mew:
    printf("Iteration\n");
    printf("--------------\n");
    for (i = 0; i <= 3; i++)
    {
        for (in = 0; in <= 1; in++)
        {
            for (j = 0; j <= 1; j++)
            {
                zin[in] += x[i][j] * w[j][c];
            }
            zin[in] += b[in];
            printf("zin%d= %.3f\t", in, zin[in]);
            c += 1;
        }
        c = 0;
        d = 1;
        if (zin[c] >= 0 & zin[d] >= 0)
            z1 = z2 = 1;
        else if (zin[c] >= 0 & zin[d] <= 0)
        {
            z1 = 1;
            z2 = -1;
        }
        else if (zin[c] <= 0 & zin[d] >= 0)
        {
            z1 = -1;
            z2 = 1;
        }
        else
        {
            z1 = z2 = -1;
        }
        yin = z1 * v1 + z2 * v2 + b3;
        printf("NET %.3f\t", yin);
        for (in = 0; in <= 1; in++)
        {
            o[in] = tar[i] - zin[in];
            er += o[in] * o[in];
            zin[in] = 0;
        }
        if (yin == tar[i])
        {
            for (in = 0; in <= 1; in++)
            {
                for (j = 0; j <= 1; j++)
                {
                    wc[in][j] = 0;
                    w[in][j] += wc[in][j];
                }
                bc[in] = 0;
            }
            yin = 0;
        }
        else
        {
            for (in = 0; in <= 1; in++)
            {
                for (j = 0; j <= 1; j++)
                {
                    wc[in][j] = alp * o[j] * x[i][in];
                    printf("wc%d%d=%.3f\t", in, j, wc[in][j]);
                    w[in][j] += wc[in][j];
                    printf("w=%.3f\t", w[in][j]);
                    wc[in][j] = 0;
                }
            }
            for (in = 0; in <= 1; in++)
            {
                bc[in] = alp * o[in];
                b[in] += bc[in];
                printf("\nb%d=%.3f", in, b[in]);
            }
            for (in = 0; i <= 1; in++)
            {
                bc[in] = 0;
            }
            yin = 0;
        }
        printf("\n");
    }
    if (er <= 1)
    {
        for (i = 0; i <= 1; i++)
        {
            for (j = 0; j <= 1; j++)
                printf("%.3f", w[i][j]);
        }
    }
    else
    {
        yin = 0;
        for (in = 0; in <= 1; in++)
        {
            bc[in] = 0;
            zin[in] = 0;
        }
        er = 0;
        goto mew;
    }
}