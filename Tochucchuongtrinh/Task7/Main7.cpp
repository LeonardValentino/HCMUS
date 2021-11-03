#include <stdio.h>
#include <math.h>
#include "bai7.h"

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int tinh_tong = tong_hoanhao_chinhphuong(n);
    printf("Tong cac so hoan hao hoac chinh phuong trong khoang tu 1 den %d la: %d",n, tinh_tong); 
    return 0;
}
