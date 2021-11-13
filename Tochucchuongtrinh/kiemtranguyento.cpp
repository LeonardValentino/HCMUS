#include <iostream>
#include <cmath>
using namespace std;

bool kiemtranguyento(int n)
{
    if(n == 1)
        return false;
    else if(n % 2 == 0 && n != 2)
        return false;
    else
    {
        for(int i = 3; i <= n/2; i++)
        {
            if(n % i == 0)
                return false;
        }
    }
    return true;
}
