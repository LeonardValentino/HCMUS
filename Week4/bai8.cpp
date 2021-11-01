#include <stdio.h>
#include <math.h>


int so_chinh_phuong(int a);
int tong_chinh_phuong_va_le(int n);
int main()
{
    unsigned int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int tinh_tong = tong_chinh_phuong_va_le(n);
    printf("Tong cac so chinh phuong hoac so le tu 1 den %d la: %d", n , tinh_tong);
    return 0;
}

int so_chinh_phuong(int a)
{
    if(sqrt(a) == (int)sqrt(a))
        return 1;   // la so chinh phuong
    return 0;   // khong la so chinh phuong
}
int tong_chinh_phuong_va_le(int n)
{
    int tong = 0;
    for(int i = 1; i <= n; i++)
    {
        int kiemtra_chinhphuong = so_chinh_phuong(i);
        if(kiemtra_chinhphuong == 1 || i % 2 != 0)
            tong += i;
    }
    return tong;
}
