/*BACK PROPAGATION NETWOR*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    float v[2][4], w[4][1], vc[2][4], wc[4][1], de, del[4], bl, bia, bc[4], e = 0;
    float x[4][2], t[4], zin[4], delin[4], yin = 0, y, dy, dz[4], b[4], z[4], es, alp = 0.02;
    int i, j, k = 0, itr = 0;
    v[0][0] = 0.1970;
    v[0][1] = 0.3191;
    v[0][2] = -0.1448;
    v[0][3] = 0.3594;
    v[1][0] = 0.3099;
    v[1][1] = 0.1904;
    v[1][2] = -0.0347;
    v[1][3] = -0.4861;
    w[0][0] = 0.4919;
    w[1][0] = -0.2913;
    w[2][0] = -0.3979;
    w[3][0] = 0.3581;
    b[0] = -0.3378;
    b[1] = 0.2771;
    b[2] = 0.2859;
    b[3] = -0.3329;
    bl = -0.141;
    x[0][0] = -1;
    x[0][1] = -1;
    x[1][0] = -1;
    x[1][1] = 1;
    x[2][0] = 1;
    x[2][1] = -1;
    x[3][0] = 1;
    x[3][1] = 1;
    t[0] = 0;
    t[1] = 1;
    t[2] = 1;
    t[3] = 0;
    for (itr = 0; itr <= 3; itr++)
    {
        e = 0;
        es = 0;
        for (i = 0; i <= 3; i++)
        {
            do
            {
                for (j = 0; j <= 1; j++)
                {
                    zin[k] += x[i][j] * v[j][k];
                }
                zin[k] += b[k];
                k += 1;
            } while (k <= 4);
            for (j = 0; j <= 3; j++)
            {
                z[j] = (1 - exp(-zin[j])) / (1 + exp(-zin[j]));
                dz[j] = ((1 + z[j]) * (1 - z[j])) * 0.5;
            }
            for (j = 0; j <= 3; j++)
            {
                yin += z[j] * w[j][0];
            }
            yin += bl;
            y = (1 - exp(-yin)) / (1 + exp(-yin));
            dy = ((1 + y) * (1 - y)) * 0.5;
            de = (t[i] - y) * dy;
            e = t[i] - y;
            es += 0.5 * (e * e);
            for (j = 0; j <= 3; j++)
            {
                wc[j][0] = alp * de * z[j];
                delin[j] = de * w[j][0];
                del[j] = delin[j] * dz[j];
            }
            bia = alp * de;
            for (k = 0; k <= 1; k++)
            {
                for (j = 0; j <= 3; j++)
                {
                    vc[k][j] = alp * del[j] * x[i][k];
                    v[k][j] += vc[k][j];
                }
            }
            for (j = 0; j <= 3; j++)
            {
                bc[j] = alp * del[j];
                w[j][0] += wc[j][0];
                b[j] += bc[j];
            }
            bl += bia;
            for (j = 0; j <= 3; j++)
            {
                zin[j] = 0;
                z[j] = 0;
                dz[j] = 0;
                delin[j] = 0;
                del[j] = 0;
                bc[j] = 0;
            }
            k = 0;
            yin = 0;
            y = 0;
            dy = 0;
            bia = 0;
            de = 0;
        }
        printf("\nEpoch %d:\n", itr);
        for (k = 0; k <= 1; k++)
        {
            for (j = 0; j <= 3; j++)
            {
                printf("%f\t", v[k][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (k = 0; k <= 3; k++)
        {
            printf("%f\t", w[k][0]);
        }
        printf("\n%f", bl);
        printf("\t");
        for (k = 0; k <= 3; k++)
        {
            printf("%f\t", b[k]);
        }
    }
}
