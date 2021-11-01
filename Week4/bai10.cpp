#include <stdio.h>
#include <math.h>

long tong_tien_di_taxi(int n);
int main()
{
    unsigned int n;
    printf("Nhap so km: ");
    scanf("%d", &n);

    long tong_tien_tra = tong_tien_di_taxi(n);
    printf("Tong tien phai tra khi di taxi la: %li", tong_tien_tra);
    return 0;
}

long tong_tien_di_taxi(int n)
{
    long tien_phai_tra = 0;
    int quang_duong_di = n;
    if(n <= 1)
    {
        tien_phai_tra += 15000;
    }
    else if(n > 1 && n <= 5)
    {
        tien_phai_tra = 15000 + (n - 1)* 13500;
    }
    else if(n >= 6)
    {
        tien_phai_tra = 15000 + 4 * 13500 + (n - 5)* 11000;
    }

    if(quang_duong_di >= 120)
    {
        tien_phai_tra = tien_phai_tra - (tien_phai_tra * 10)/100;
    }
    return tien_phai_tra;

}

