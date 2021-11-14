#include <stdio.h>
#include <math.h>
using namespace std;

bool kiemtrachinhphuong(int n)
{
    if(sqrt(n) == (int)sqrt(n))
        return true;
    return false;
}

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

bool kiemtradoixung(int n)
{
    int temp1 = 0;
    int temp2 = n;
    while(n != 0)
    {
        temp1 = temp1 * 10 + n % 10;
        n /= 10;
    }
    if(temp1 == temp2)
        return true;
    return false;
}

bool kiemtratoanle(int n)
{
    while(n != 0)
    {
        int temp = n % 10;
        if(temp % 2 == 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool kiemtrachan(int n)
{
    if(n % 2 == 0)
        return true;
    return false;
}

bool kiemtrahoanchinh(int n)
{
    int tongcacuoc = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            tongcacuoc += i;
    }
    if(tongcacuoc == n)
        return true;
    return false; 
}
