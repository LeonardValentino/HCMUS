#include <stdio.h>
#include <math.h>
#include "kiemtra.h"
int main()
{
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    int kiemtra = kiemtra_chinhphuong(n);
    if(kiemtra == 1)
        printf("%d la so chinh phuong.",n);
    else
        printf("%d khong la so chinh phuong.",n);
}
