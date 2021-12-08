#include <stdio.h>
#include <math.h>
#include <conio.h>
struct HOCSINH{
    char hoTen[40];
    float diemToan;
    float diemLy;
    float diemHoa;
};
typedef struct HOCSINH HS;

void nhapThongTin(HS &a)
{
    printf("\nNhap ho ten hoc sinh: ");
    fflush(stdin); gets(a.hoTen);
    printf("Nhap diem toan: ");
    scanf("%f", &a.diemToan);
    printf("Nhap diem ly: ");
    scanf("%f", &a.diemLy);
    printf("Nhap diem hoa: ");
    scanf("%f", &a.diemHoa);
}

void xuatThongTin(HS a)
{
    printf("\nHo va ten: "); puts(a.hoTen);
    printf(" - Diem Toan: %.2f - Diem Ly: %.2f - Diem Hoa: %.2f", a.diemToan, a.diemLy, a.diemHoa);
}

void nhap(HS a[], int &n)
{
    do
    {
        printf("Nhap so hoc sinh: ");
        scanf("%d", &n);
        if(n < 1 || n > 200)
            printf("So hoc sinh khong hop le. Xin nhap le.\n");
    } while (n < 1 || n > 200);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin hoc sinh %d: ", i + 1);
        nhapThongTin(a[i]);
    }

}

void xuat(HS a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nThong tin hoc sinh %i: ", i + 1);
            xuatThongTin(a[i]);
    }
}

void hoanVi(HS &a, HS &b)
{
    HS temp = a;
    a = b;
    b = temp;
}

void sapXepHocSinh(HS a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i].diemToan > a[j].diemToan)
                hoanVi(a[i],a[j]);
        }
    }
}

void xuatTenHocSinh(HS a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Ho ten: "); puts(a[i].hoTen);
        printf(" Diem toan: %.2f", a[i].diemToan);
        printf("\n");
    }
}

float tinhDiemTrungBinh(HS a)
{
    return (a.diemToan + a.diemHoa + a.diemLy) / 3;
}

void xepHangHocSinh(HS a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(tinhDiemTrungBinh(a[i]) < tinhDiemTrungBinh(a[j]));
                hoanVi(a[i], a[j]);
        }
    }
}

void xuatHocSinhDatHocBong(HS a[], int n)
{
    for(int i = 0; i < 3; i++)
    {
        printf("\n%d. Hoc sinh: ",i + 1); puts(a[i].hoTen);
    }
}

int main()
{
    int N;
    HS a[200];
    nhap(a,N);
    sapXepHocSinh(a,N);
    printf("\nDanh sach hoc sinh duoc sap xep tang dan theo diem toan: ");
    xuatTenHocSinh(a,N);
    xepHangHocSinh(a,N);
    printf("\nDanh sach hoc sinh nhan hoc bong: \n");
    xuatHocSinhDatHocBong(a,N);
    return 0;
}
