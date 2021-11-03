#include <stdio.h>
#include <math.h>
#include "bai8.h"

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int tich_1_den_n = tinh_tich_chinhphuong_hoac_sochan(n);
    printf("Tich cac so chan hoac chinh phuong tu 1 den %d la: %d", n, tich_1_den_n);
    return 0;
}
