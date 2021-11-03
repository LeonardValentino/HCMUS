#include <stdio.h>
#include <math.h>
#include "bai10.h"

int kiemtra_chinhphuong(int n )
{
    if(sqrt(n) == (int)sqrt(n))
        return 1;   // chinh phuong
    return 0;
}

int so_chinh_phuong_dau(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(kiemtra_chinhphuong(i) == 1)
        {
            return i;
            break;
        }
    }
    return -1;
}
