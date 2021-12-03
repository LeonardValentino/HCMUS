#include "kiemtra.h"
#include <stdio.h>
#include <math.h>

bool kiemTraSoNguyenTo(int n)
{
    if (n < 2)
        return false;
    else if (n % 2 == 0 && n != 2)
        return false;
    else
    {
        for (int i = 3; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

bool kiemTraCucTri(int a[][100], int vtd, int vtc, int dong, int cot)
{
    bool cucDai = true, cucTieu = true;

    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if (vtd + i >= 0 && vtc + j >= 0 && vtd + i < dong && vtc + j < cot && !(i == 0 && j == 0))  // do khi i j bang khong se la chinh so can so sanh nen bo qua
            {
                if (a[vtd][vtc] <= a[vtd + i][vtc + j])
                    cucDai = false;
                if (a[vtd][vtc] >= a[vtd + i][vtc + j])
                    cucTieu = false;
                if (cucDai == false && cucTieu == false)
                    break;
            }
        }
    }
    if (cucDai == false && cucTieu == false)
        return false;
    return true;
}

bool KiemTraCoPhaiPhanTuHoangHau(int a[][100], int vtdong, int vtcot, int dong, int cot)
{
    int x = a[vtdong][vtcot];

    for (int i = 0; i < cot; i++)
    {
        if (a[vtdong][i] > x)
        {
            return false;
        }
    }

    for (int j = 0; j < dong; j++)
    {
        if (a[j][vtcot] > x)
        {
            return false;
        }
    }

    int vtdong1 = vtdong + 1;
    int vtcot1 = vtcot + 1;
    while (vtcot1 + 1 < cot && vtdong1 < vtdong)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;

        vtcot1++;
        vtdong1++;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 >= 0)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;

        vtcot1--;
        vtdong1--;
    }

    vtdong1 = vtdong + 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 < dong)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;

        vtdong1++;
        vtcot1--;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot + 1;

    while (vtdong1 - 1 >= 0 && vtcot1 < cot)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;

        vtdong1--;
        vtcot1++;
    }
    return true;
}