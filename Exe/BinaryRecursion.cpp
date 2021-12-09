#include <stdio.h>


void xuatNhiPhan(int n)
{
    if(n < 0)
        return;
    else
    {
        if((n / 2) > 0) xuatNhiPhan(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;
    printf("Nhap so can doi nhi phan: ");
    scanf("%d", &n);

    xuatNhiPhan(n);
}
