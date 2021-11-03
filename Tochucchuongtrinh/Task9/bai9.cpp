#include <stdio.h>
#include <math.h>
#include "bai9.h"

int kiemtra_nguyento(int n )
{
    if(n == 1 || n == 2)
        return 1;
    else if(n % 2 == 0)
        return 0;
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                return 0;
                break;
            }
        }
    }
    return 1;
}

int kiemtra_toanle(int n)
{
    int check = 1;
    int temp = 0;
    while(n != 0)
    {
        temp = n % 10;
        if(temp % 2 == 0)
        {
            check = 0;
            break;
        }
        n /= 10;
    }
    return check;
}

int tich_nguyento_hoac_toanle(int n)
{
    int tich = 1;
    for(int i = 1; i <= n; i++)
    {
        if(kiemtra_toanle(i) == 1 || kiemtra_nguyento(i) == 1)
            tich *= i;
    }
    return tich;
}
