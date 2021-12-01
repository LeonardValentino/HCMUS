#include <stdio.h>
#include <string.h>


struct PhanSo{
    int mauso;
    int tuso;
};
typedef struct PhanSo PS;
void nhapPS(PS &a)
{
    printf("\nNhap tu so: ");
    scanf("%d",&a.tuso);
    do
    {
        printf("Nhap mau so: ");
        scanf("%d", &a.mauso);
        if(a.mauso == 0)
            printf("Mau so bang khong phan so se khong xac dinh. Xinh nhap lai.\n");
    } while (a.mauso == 0);

}   

void xuatPS(PS a)
{
    printf("%d/%d\n", a.tuso, a.mauso);
}

void nhapDayPhanSo(PS a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap phan so thu %d: ", i + 1);
        nhapPS(a[i]);
    }
}

void xuatDayPhanSo(PS a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Phan so thu %d: ", i + 1);
        xuatPS(a[i]);
    }
}

int UCLN(int a, int b)
{
    if(a == 0 || b == 0)
        return a + b;
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

PS rutGonPhanSo(PS &a)
{
    int uocChung = UCLN(a.tuso, a.mauso);
    a.tuso = a.tuso / uocChung;
    a.mauso = a.mauso / uocChung;
}

bool kiemTraToiGian(int a, int b)
{
    if(UCLN(a,b) > 1)
        return false;
    return true;
}

void thayThePhanSoToiGian(PS a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(kiemTraToiGian(a[i].tuso, a[i].mauso) == false)
            rutGonPhanSo(a[i]);
    }
}

float tongPhanSo(PS a[], int n)
{
    float tong = 0;
    for(int i = 0; i < n; i++)
    {
        tong += ((float)a[i].tuso/a[i].mauso);
    }
    return tong;
}

int main()
{
    PS a[100];
    int N;
    printf("Nhap so luong phan so ban muon co: ");
    scanf("%d", &N);
    nhapDayPhanSo(a,N);
    xuatDayPhanSo(a,N);
    printf("Tong cac phan so trong day: %.3f", tongPhanSo(a,N));
    thayThePhanSoToiGian(a,N);
    printf("Day phan so sau khi rut gon: \n");
    xuatDayPhanSo(a,N);
    return 0;
}
