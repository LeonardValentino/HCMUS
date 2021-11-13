#include <stdio.h>
#include "nguyento.h"

int kiemtra_nguyento(int n )
{
    if(n == 1)
        return 0;   
    else if(n % 2 == 0 && n != 2)
        return 0;
    else
    {
        for(int i = 3; i < n; i++)
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
