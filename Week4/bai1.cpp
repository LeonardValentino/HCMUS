#include <stdio.h>
#include <math.h>
int kiem_tra_chinh_phuong(int n);
int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    int so_chinh_phuong = kiem_tra_chinh_phuong(n);
    if(so_chinh_phuong == 1)
        printf("%d la so chinh phuong.", n);
    else    
        printf("%d khong la so chinh phuong.", n);
    return 0;
}

int kiem_tra_chinh_phuong(int n)
{
    int check = 1;
    if(sqrt(n) != (int)sqrt(n))
        check = 0;
    else check = 1;
    return check;
}
