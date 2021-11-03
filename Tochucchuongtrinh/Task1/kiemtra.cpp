#include <stdio.h>
#include <math.h>
#include "kiemtra.h"

int kiemtra_chinhphuong(int n )
{
    if(sqrt(n) == (int)sqrt(n))
        return 1;   // chinh phuong
    return 0;
}
