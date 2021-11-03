#include <stdio.h>
#include "bai10.h"

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int so_chinh_phuong = so_chinh_phuong_dau(n);
    printf("So chinh phuong dau: %d", so_chinh_phuong);
    return 0;
    
}
