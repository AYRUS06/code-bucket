#include <stdio.h>

float mean(float arr[], int n)
{
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    ans /= n;
    return ans;
}

float variance(float arr[], int n)
{
    float m = mean(arr, n);
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (arr[i] - m) * (arr[i] - m);
    }
    ans /= n;
    return ans;
}

float cov(float arr1[], int n, float arr2[])
{
    float m1 = mean(arr1, n);
    float m2 = mean(arr2, n);
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (arr1[i] - m1) * (arr2[i] - m2);
    }
    ans /= n - 1;
    return ans;
}

void lin_reg(float arr1[], float arr2[], int n)
{
    float var = variance(arr1, n);
    float c = cov(arr1, n, arr2);
    float b1 =  c/var ;
    float b0 = mean(arr2, n) - b1 * mean(arr1, n); //b0 = Ymean - b0*Xmean
    printf("slope: %f  intercept:  %f\n", b1, b0);
}

int main(void)
{
    float arr1[100] = {
        1.1,
        1.3,
        1.5,
        2,
        2.2,
        2.9,
        3,
        3.2,
        3.2,
        3.7,
        3.9,
        4,
        4,
        4.1,
        4.5,
        4.9,
        5.1,
        5.3,
        5.9,
        6,
        6.8,
        7.1,
        7.9,
        8.2,
        8.7,
        9,
        9.5,
        9.6,
        10.3,
        10.5,
    };
    float arr2[100] = { 39343,
                        46205,
                        37731,
                        43525,
                        39891,
                        56642,
                        60150,
                        54445,
                        64445,
                        57189,
                        63218,
                        55794,
                        56957,
                        57081,
                        61111,
                        67938,
                        66029,
                        83088,
                        81363,
                        93940,
                        91738,
                        98273,
                        101302,
                        113812,
                        109431,
                        105582,
                        116969,
                        112635,
                        122391,
                        121872,
    };
    int n = 30;
    lin_reg(arr1, arr2, n);
}