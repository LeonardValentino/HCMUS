#include <stdio.h>
#include <math.h>
#include "bai7.h"

int kiemtra_chinhphuong(int n)
{
    if(sqrt(n) == (int)sqrt(n))
        return 1;   // chinh phuong
    return 0;
}

int kiemtra_hoanhao(int n)
{
    int check = 1;
    int tong_cac_uoc = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            tong_cac_uoc += i;
    }
    if(tong_cac_uoc != n)
        check = 0;
    return check;
}

int tong_hoanhao_chinhphuong(int n)
{
    int tong = 0;
    for(int i = 1; i <= n; i++)
    {
        if(kiemtra_hoanhao(i) == 1 || kiemtra_chinhphuong(i) == 1)
            tong += i;
    }
    return tong;
}
