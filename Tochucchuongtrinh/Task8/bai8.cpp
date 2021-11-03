#include <stdio.h>
#include "bai8.h"

int kiemtra_chinhphuong_hoac_chan(int n)
{
    int chinh_phuong = 0;
    int so_chan = 0;
    if(sqrt(n) == (int)sqrt(n))
        chinh_phuong = 1;
    if(n % 2 == 0)  
        so_chan = 1;
    if(chinh_phuong == 1 || so_chan == 1)
        return 1;   // thoa 1 trong hai dieu kien
    return 0;
}

int tinh_tich_chinhphuong_hoac_sochan(int n)
{
    int tich = 1;
    int check = 0;
    for(int i = 1; i <= n; i++)
    {
        check = kiemtra_chinhphuong_hoac_chan(i);
        if(check == 1)
            tich *= i;
    }
    return tich;
}
