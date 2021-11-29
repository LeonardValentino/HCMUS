#include "kiemtra.h"
#include <stdio.h>

bool kiemTraTrung(int a[], int n, int i)
{
    for (int j = i - 1; j >= 0; j--)
    {
        if (a[j] == a[i])
            return false;
    }
    return true;
}

bool kiemTraNguyenTo(int n)
{
    if (n == 1)
        return false;
    else if (n % 2 == 0 && n != 2)
        return false;
    else
    {
        for (int i = 3; i <= n / 2; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

bool kiemTraTrung2(int A[], int n, int check)
{
    for (int i = 0; i < n; i++)
    {
        if (check == A[i])
            return false;
    }
    return true;
}

bool checkBinary(long long int n)
{
    while (n != 0)
    {
        if (n % 10 > 1)
            return false;
        n /= 10;
    }
    return true;
}