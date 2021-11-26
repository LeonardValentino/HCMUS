#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int &n)
{
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf("%d", &n);
        if(n < 1 || n > 10000)
            printf("So phan tu khong hop le. Xin nhap lai.\n");
    } while (n < 1 || n > 10000);

    for(int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
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

void hoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sapXepMang(int a[], int n, int X)
{
    int end = n - 1, start = 0;
    int b[1000];
    printf("Cac uoc cua %d la: ", X);
    for(int i = 0; i < n; i++)
    {
        if(X % a[i] == 0)
        {
            printf("%d ", a[i]);
            b[end--] = a[i];
        }
        else
        {
            b[start++] = a[i];
        }
    }

    for(int i = 0; i < end; i++)
    {
        for(int j = i + 1; j <= end; j++)
        {
            if(a[i] > a[j])
                hoanVi(a[i], a[j]);
        }
    }

    printf("\nMang sau khi sap xep cac so khong phai la uoc: ");
    xuatMang(b,n);
}

int main()
{
    
    int a[10000];
    int n,X;
    nhapMang(a,n);
    printf("Cac phan tu nguyen vua nhap vao mang: ");
    xuatMang(a,n);
    printf("Nhap vao gia tri cua X: ");
    scanf("%d",&X);
    sapXepMang(a,n,X);
    return 0;
}
