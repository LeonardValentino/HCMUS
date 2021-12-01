#include <stdio.h>
#include <string.h>


struct PhanSo{
    int mauso;
    int tuso;
};
typedef struct PhanSo PS;
void nhapPS(PS &a)
{
    printf("Nhap tu so: ");
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

void tinhToanPhanSo(PS a, PS b)
{
    PS tong;
    tong.mauso = a.mauso * b.mauso;
    tong.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
    
    PS hieu;
    hieu.mauso = a.mauso * b.mauso;
    hieu.tuso = a.tuso * b.mauso + a.mauso * b.tuso;

    PS tich;
    tich.tuso = a.tuso * b.tuso;
    tich.mauso = a.mauso * b.mauso;

    PS thuong;
    thuong.tuso = a.tuso * b.mauso;
    thuong.mauso = a.mauso * b.tuso;
    printf("Tong hai phan so la: "); xuatPS(tong);
    printf("Hieu hai phan so la: "); xuatPS(hieu);
    printf("Tich hai phan so la: "); xuatPS(tich);
    printf("Thuong hai phan so la: "); xuatPS(thuong);
}

PS rutGonPhanSo(PS &a)
{
    int uocChung = UCLN(a.tuso, a.mauso);
    a.tuso = a.tuso / uocChung;
    a.mauso = a.mauso / uocChung;
}

int soSanhPhanSo(PS a, PS b)
{
    a.tuso = a.tuso * b.mauso;
    b.tuso = a.mauso * b.tuso;

    if(a.tuso > b.tuso)
        return 1;   // a lon hon b
    else if(a.tuso < b.tuso)
        return -1;  // a be hon b
    else
        return 0;   // bang
}

int main()
{
    PS a,b;
    printf("Nhap phan so a: \n");
    nhapPS(a);
    printf("Phan so ban da nhap la: "); xuatPS(a);
    printf("Nhap phan so b: \n");
    nhapPS(b);
    printf("Phan so ban da nhap la: "); xuatPS(b);

    tinhToanPhanSo(a,b);
    int compare = soSanhPhanSo(a,b);
    if(compare == 1)
        printf("Phan so a lon hon phan so b.");
    else if(compare == 0)
        printf("Phan so a bang phan so b.");
    else 
        printf("Phan so a nho hon phan so b.");
    
    return 0;
}
