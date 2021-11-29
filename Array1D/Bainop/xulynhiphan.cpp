#include "xulynhiphan.h"
#include <stdio.h>
#include <math.h>

void minusNumber(int a[])
{
    int index;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 1)
        {
            index = i;
            break;
        }
    }
    for (int i = index + 1; i < 9; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }
}

void binToDec(int a[], int n)
{
    n = abs(n);
    int size = 0;
    while (n != 0)
    {
        a[size++] = n % 2;
        n /= 2;
    }
}

void printResult(int a[])
{
    for (int i = 8; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

void enterBinary(int a[], long long int& n)
{
    do
    {
        printf("Nhap so nhi phan 16 bit: ");
        scanf_s("%lld", &n);
        if (checkBinary(n) == false)
            printf("So nhi phan chi gom hai chu so 0 va 1, xin nhap lai.\n");
    } while (checkBinary(n) == false);
    for (int i = 0; i <= 15; i++)
    {
        a[i] = n % 10;
        n /= 10;
    }
}

int binToDec(int a[])
{
    int decNum = 0;
    decNum += a[15] * pow(-2, 15);
    for (int i = 14; i >= 0; i--)
    {
        decNum += a[i] * pow(2, i);
    }
    return decNum;
}