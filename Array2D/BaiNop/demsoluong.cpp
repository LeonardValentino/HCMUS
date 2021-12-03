#include "demsoluong.h"
#include <stdio.h>

int demSoNguyenTo(int a[][100], int dong, int cot)
{
    int count = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (kiemTraSoNguyenTo(a[i][j]) == true)
                count++;
        }
    }
    return count;
}

int demSoLuongPhanTuHoangHau(int a[][100], int dong, int cot)
{
    int dem = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (KiemTraCoPhaiPhanTuHoangHau(a, i, j, dong, cot) == true)
            {
                dem++;
            }
        }
    }
    return dem;
}