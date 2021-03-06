#include <stdio.h>
#include <math.h>

struct DIEM2D{
    float x;
    float y;
};

void nhap(DIEM2D &a)
{
    printf("\nNhap hoanh do: ");
    scanf("%f", &a.x);
    printf("Nhap tung do: ");
    scanf("%f", &a.y);
}

void xuat(DIEM2D a)
{
    printf("(%.2f ; %.2f)", a.x, a.y);
}

float khoangCachHaiDiem(DIEM2D a, DIEM2D b)
{
    float hoanh = (b.x - a.x) * (b.x - a.x);
    float tung  = (b.y - a.y) * (b.y - a.y);
    return sqrt(tung + hoanh);
}

float chuViTamGiac(DIEM2D a, DIEM2D b, DIEM2D c)
{
    float ab = khoangCachHaiDiem(a,b);
    float ac = khoangCachHaiDiem(a,c);
    float bc = khoangCachHaiDiem(b,c);

    return ab + ac + bc;
}

float dienTichTamGiac(DIEM2D a, DIEM2D b, DIEM2D c)
{
    float p = chuViTamGiac(a,b,c)/2;
    float ab = khoangCachHaiDiem(a,b);
    float bc = khoangCachHaiDiem(b,c);
    float ac = khoangCachHaiDiem(a,c);
    return sqrt(p * (p - ab) * (p - ac) * (p - bc));
}

float check(DIEM2D p1, DIEM2D p2, DIEM2D p3)
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

int PointInTriangle(DIEM2D pt, DIEM2D v1, DIEM2D v2, DIEM2D v3)
{
    bool b1, b2, b3;

    b1 = check(pt, v1, v2) < 0.0f;
    b2 = check(pt, v2, v3) < 0.0f;
    b3 = check(pt, v3, v1) < 0.0f;

    if((b1 == b2) && (b2 == b3))
        return 1;
    return 0;
}

int main()
{
    DIEM2D a,b,c,d;
    printf("Nhap diem A: ");
    nhap(a);
    printf("Nhap diem B: ");
    nhap(b);
    printf("Diem A ban vua nhap la: "); xuat(a);
    printf("\nDiem B ban vua nhap la: "); xuat(b);
    printf("\nKhoang cach hai diem A va B la: %.3f", khoangCachHaiDiem(a,b));

    printf("\nNhap 3 dinh cua tam giac: ");
    printf("\nNhap diem thu 1: ");
    nhap(a);
    printf("\nNhap diem thu 2: ");
    nhap(b);
    printf("\nNhap diem thu 3: ");
    nhap(c);
    printf("Chu vi tam giac vua nhap la: %.2f", chuViTamGiac(a,b,c));
    float dientich = dienTichTamGiac(a,b,c);
    printf("\nDien tich tam giac la: %.2f",dienTichTamGiac(a,b,c));

    printf("\nNhap diem can kiem tra: ");
    nhap(d);
    if(PointInTriangle(d,a,b,c) == 1)
        printf("Diem can kiem tra nam trong tam giac.");
    else
        printf("Diem can kiem tra khong nam trong tam giac.");
    return 0;
}
