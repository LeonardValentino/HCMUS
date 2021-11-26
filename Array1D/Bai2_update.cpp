#include <stdio.h>
#include <math.h>

void minusNumber(int a[])
{
    int index;
    for(int i = 0; i < 9; i++)
    {
        if(a[i] == 1)
        {
            index = i;
            break;
        }
    }
    for(int i = index + 1; i < 9; i++)
    {
        if(a[i] == 0)
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
    while(n != 0)
    {
        a[size++] = n % 2;
        n /= 2;
    }
}

void printResult(int a[])
{
    for(int i = 8; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    int a[9] = {0};
    int n;
    do
    {
        printf("Nhap so nguyen can doi sang nhi phan: ");
        scanf("%d", &n);
        if(n < -255 || n > 255)
            printf("So ban nhap khong hop le. Xin nhap lai.\n");
    } while (n < -255 || n > 255);
    binToDec(a,n);
    if(n < 0)
    {
        minusNumber(a);
        printf("\nSo nhi phan da doi la: ");
        printResult(a);
    }
    else
    {
        printf("\nSo nhi phan da doi la: ");
        printResult(a);
    }
    return 0;
}
