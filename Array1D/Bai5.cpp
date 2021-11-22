#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int &n)
{
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf_s("%d", &n);
        if(n < 1 || n > 15)
            printf("Mang co toi da 15 pha tu. Xin nhap lai.\n");
    } while (n < 1 || n > 15);

    for(int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu nguyen duong thu %d: ", i + 1);
        scanf_s("%d", &a[i]);
    }
}

void xuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int demPhanTuTanCung6VaChiaHetCho6(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 10 == 6 && a[i] % 6 == 0)
        {
            dem++;
        }
    }
    return dem;
}

float tinhTrungBinhCongMang(int a[], int n)
{
    float average = 0;
    for(int i = 0; i < n; i++)
    {
        average += a[i];
    }
    average = average / (n+1);
    return average;
}

bool kiemTraTrung(int a[], int n, int i)
{
    for(int j = i - 1; j >= 0; j--)
    {
        if(a[j] == a[i])
            return false;
    }
    return true;
}

bool kiemTraNguyenTo(int n)
{
    if(n == 1)
        return false;
    else if(n % 2 == 0 && n != 2)
        return false;
    else
    {
        for(int i = 3; i <= n / 2; i++)
        {
            if(n % i == 0)
                return false;
        }
    }
    return true;
}


int demSoNguyenToPhanBiet(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(kiemTraNguyenTo(n) == true && kiemTraTrung(a,n,i) == true) 
            dem++;
    }
    return dem;
}

int main()
{
    int a[15];
    int n;
    nhapMang(a,n);
    xuatMang(a,n);
    printf("So phan tu co tan cung la 6 va chia het cho 6 la: %d", demPhanTuTanCung6VaChiaHetCho6(a,n));
    printf("\nTrung binh cong cac phan tu trong mang la: %f", tinhTrungBinhCongMang(a,n));
    printf("\nSo luong cac so nguyen to phan biet trong mang la: %d", demSoNguyenToPhanBiet(a,n));
    return 0;
}
