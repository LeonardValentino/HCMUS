#include <stdio.h>
#include <math.h>
#include "bai6.h"

int kiemtra_nguyento(int n)
{
    int check = 1;
    if(n % 2 == 0 && n != 2)
        check = 0;
    else
    {
        for(int i = 3; i < n; i++)
        {
            if(n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }
    return check;
}

int tong_nguyen_to(int n)
{
    int tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(kiemtra_nguyento(i) == 1)
            tong += i;
    }
    return tong;
}
