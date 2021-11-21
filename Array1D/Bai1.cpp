#include <stdio.h>
#include <math.h>

void nhapMang(float a[], int &n)
{
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf_s("%d", &n);
        if(n < 1 || n > 100)
            printf("So phan tu khong hop le. Xin nhap lai.\n");
    } while (n < 1 || n > 100);

    for(int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf_s("%f", &a[i]);
    }
}

void xuatMang(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%0.3f ", a[i]);
    }
    printf("\n");
}

int demSoAm(float a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
            dem++;
    }
    return dem;
}

int main()
{
    float a[100];
    int n;
    nhapMang(a,n);
    printf("Cac phan tu thuc vua nhap vao mang: ");
    xuatMang(a,n);
    printf("So luong cac phan tu am cua mang la: %d", demSoAm(a,n));
    return 0;
}
