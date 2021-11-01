#include <stdio.h>
#include <math.h>

int so_le_dau_tien(int n);
int main()
{
    unsigned int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int so_le = so_le_dau_tien(n);
    if(so_le == 0)
        printf("%d khong co chu so le.",n);
    else 
        printf("Chu so le dau tien cua %d la: %d", n , so_le);
    return 0;
}
int so_le_dau_tien(int n)
{
    int so_le_dau = 0;
    int i = 0;
    while(n != 0)
    {
        i = n % 10;
        if(i % 2 != 0)
            so_le_dau = i;
        n /= 10;
    }
    return so_le_dau;
}
