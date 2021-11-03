#include <stdio.h>
#include <math.h>
#include "doixung.h"

int kiemtra_doixung(int n)
{
    int temp = n;
    int so_doi_xung = 0;
    while(temp != 0)
    {
        so_doi_xung = so_doi_xung * 10 + temp % 10;
        temp /= 10;
    }

    if(so_doi_xung == n)
        return 1;
    return 0;
}
