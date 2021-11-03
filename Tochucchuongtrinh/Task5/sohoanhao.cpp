#include "sohoanhao.h"
#include <stdio.h>
#include <math.h>

int kiemtra_hoanhao(int n)
{
    int check = 1;
    int tong_cac_uoc = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            tong_cac_uoc += i;
    }
    if(tong_cac_uoc != n)
        check = 0;
    return check;
}
