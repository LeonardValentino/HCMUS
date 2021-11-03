#include <stdio.h>
#include "nguyento.h"

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
