#include "tinhtoan.h"
#include <stdio.h>

float tinhTrungBinhCongMang(int a[], int n)
{
    float average = 0;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (kiemTraNguyenTo(a[i]) == true)
        {
            average += a[i];
            dem++;
        }
    }
    average = average / dem;
    return average;
}