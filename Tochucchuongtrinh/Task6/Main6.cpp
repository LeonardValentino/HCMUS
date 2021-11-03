#include <stdio.h>
#include <math.h>
#include "bai6.h"

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    int tong_n = tong_nguyen_to(n);
    printf("Tong cac so nguyen to tu 1 den %d la: %d", n , tong_n);
    return 0;
}
