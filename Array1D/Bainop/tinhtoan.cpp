#include "tinhtoan.h"
#include <stdio.h>

float tinhTrungBinhCongMang(int a[], int n)
{
    float average = 0;
    for (int i = 0; i < n; i++)
    {
        average += a[i];
    }
    average = average / (n + 1);
    return average;
}