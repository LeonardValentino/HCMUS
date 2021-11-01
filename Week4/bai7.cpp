#include <stdio.h>
#include <math.h>

float bieu_thuc_1(int n);
int bieu_thuc_2(int n);
long bieu_thuc_3(int n);
int main()
{
    unsigned int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%u", &n);
    float tong_cau_1 = bieu_thuc_1(n);
    int tong_cau_2 = bieu_thuc_2(n);
    long tong_cau_3 = bieu_thuc_3(n);
    printf("Ket qua bieu thuc thu 1 la: %f", tong_cau_1);
    printf("\nKet qua bieu thuc 2 la: %d", tong_cau_2);
    printf("\nKet qua bieu thuc 3: %li", tong_cau_3);
    return 0;
}

float bieu_thuc_1(int n)
{
    float tong = 0;
    for(int i = 1; i <= n; i++)
    {
        tong += (float)(i - 1)/i;
    }
    return tong;
}

int bieu_thuc_2(int n)
{
    int tong = 0;
    for(int i = 1; i <= n; i++)
    {
        tong += i * (i + 1);
    }
    return tong;
}

long bieu_thuc_3(int n)
{
    long tong = 0;
    for(int i = 0; i <= n; i++)
    {
        tong += pow(i,i);
    }
    return tong;
}
