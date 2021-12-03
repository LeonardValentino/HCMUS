#include "tinhtoan.h"
#include <stdio.h>

int tinhTongSoDuongMaTran(int a[][100], int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] > 0)
                sum += a[i][j];
        }
    }
    return sum;
}

int tongCuctri(int a[][100], int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (kiemTraCucTri(a, i, j, dong, cot) == true)
                sum += a[i][j];
        }
    }
    return sum;
}