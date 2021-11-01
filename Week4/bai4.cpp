#include <stdio.h>
#include <math.h>

int kiemtra_toan_le(int n);
int main()
{
    unsigned int n;
    printf("Nhap so nguyen duong n: "); 
    scanf("%u", &n);
    int kiem_tra_le = kiemtra_toan_le(n);
    if(kiem_tra_le == 1)
        printf("%d la so co cac chu so toan le.", n);
    else
        printf("%d la so khong co cac chu so toan le.",n);
    return 0;
}

int kiemtra_toan_le(int n)
{
    int check = 1;
    int chu_so = 0;
    while(n != 0)
    {
        chu_so = n % 10;
        if(chu_so % 2 == 0)
        {
            check = 0;
            break;
        }
        n = n/10;
    }
    return check;
}
