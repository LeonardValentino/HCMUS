#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int &n)
{
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf_s("%d", &n);
        if(n < 1 || n > 10000)
            printf("So phan tu khong hop le. Xin nhap lai.\n");
    } while (n < 1 || n > 10000);

    for(int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d: ", i + 1);
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
    for(int i = 0; i < n; i++)
    {
        if(X % a[i] == 0)
        {
            b[end--] = a[i];
        }
        else
        {
            b[start++] = a[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    for(int i = 0; i <= end ; i++)
    {
        for(int j = i + 1; j <= end + 1; j++)
        {
            if(a[i] > a[j])
                hoanVi(a[i],a[j]);
        }
    }

}

int main()
{
    
    int a[10000];
    int n,X;
    nhapMang(a,n);
    printf("Cac phan tu nguyen vua nhap vao mang: ");
    xuatMang(a,n);
    printf("Nhap vao gia tri cua X: ");
    scanf_s("%d",&X);
    sapXepMang(a,n,X);
    printf("Cac phan tu khong phai cac uoc so cua mang duoc sap xep la: ");
    xuatMang(a,n);
    return 0;
}
