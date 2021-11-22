#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int &n)
{
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf_s("%d", &n);
        if(n < 1 || n > 1000)
            printf("Mang co toi da 1000 pha tu. Xin nhap lai.\n");
    } while (n < 1 || n > 1000);

    for(int i = 0; i < n; i++)
    {
        do
        {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf_s("%d", &a[i]);
            if(abs(a[i]) > 10000)
                printf("|a[i]| co gia tri tuyet doi nho hon 10000. Xin nhap lai.\n");
        } while (abs(a[i]) > 10000);
        
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

void hoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void trichPhanTuKhongPhaiNguyenTo(int a[], int n, int b[], int &nB)
{
    for(int i = 0; i < n; i++)
    {
        if(kiemTraNguyenTo(a[i]) == false)
            b[nB++] = a[i];
    }
}

void sapXepMang(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                hoanVi(a[i], a[j]);
        }
    }
}

void xoaPhanTuTrongMang(int a[], int &n, int index)
{
    for(int i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void xoaPhanTuNguyenTo(int a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(kiemTraNguyenTo(a[i]) == true)
        {    
            xoaPhanTuTrongMang(a,n,i);
            i--;
        }
    }
}

int main()
{
    int a[1000],b[1000];
    int n,nB = 0;
    nhapMang(a,n);
    printf("Mang vua nhap: ");
    xuatMang(a,n);
    trichPhanTuKhongPhaiNguyenTo(a,n,b,nB);
    printf("Mang B sau khi duoc trich cac phan tu khong phai so nguyen to: ");
    xuatMang(b,nB);
    sapXepMang(b,nB);
    printf("Mang B sau khi duoc sap xep: ");
    xuatMang(b,nB);
    xoaPhanTuNguyenTo(a,n);
    printf("Mang A sau khi xoa cac phan tu nguyen to la: ");
    xuatMang(a,n);
    return 0;
}
