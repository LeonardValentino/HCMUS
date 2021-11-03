#include <stdio.h>
#include <math.h>
#include "sotoanle.h"

int so_toan_chu_so_le(int n)
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
