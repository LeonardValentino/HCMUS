#include <stdio.h>
#include <math.h>
#include "bai9.h"

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int tich_nguyento_toanle = tich_nguyento_hoac_toanle(n);
    printf("Tich cac so nguyen to hoac so le tu 1 den %d la: %d", n, tich_nguyento_toanle);
    return 0;
}
