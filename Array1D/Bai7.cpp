#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int &n)
{
    do
    {
        printf("Nhap vao so phan tu: ");
        scanf_s("%d", &n);
        if(n < 1 || n > 25)
            printf("Mang co toi da 25 pha tu. Xin nhap lai.\n");
    } while (n < 1 || n > 25);

}

void xuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void xuatPhanTuCoTrongAKhongCoTrongB(int A[], int B[], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        int flag = 1;
        for(int j = 0; j < m; j++)
        {
            if(A[i] == B[j])
            {
               flag = 0;
               break;
            }   
        }
        
        if(flag == 1)
        {
            printf("%d ", A[i]);
        }
    }
}

bool kiemTraTrung(int A[], int n, int check)
{
    for(int i = 0; i < n; i++)
    {
        if(check == A[i])
            return false;
    }
    return true;
}

void ghepHaiMang(int A[], int B[], int C[], int n, int m, int &k)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        C[dem++] = A[i];
    }

    for(int j = 0; j < m; j++)
    {
        if(kiemTraTrung(A,n,B[j]) == true)
            C[dem++] = B[j];
    }
    k = dem;
}

int main()
{
    int A[25], B[25];
    int n, m;
    printf("Nhap mang A: \n");
    nhapMang(A,n);
    printf("Nhap mang B: \n");
    nhapMang(B,m);

    printf("Mang A da nhap: ");
    xuatMang(A,n);
    printf("Mang B da nhap: ");
    xuatMang(B,m);
    printf("Cac phan tu co trong mang A nhung khong co trong mang B: ");
    xuatPhanTuCoTrongAKhongCoTrongB(A,B,n,m);

    int C[50];
    int k;
    ghepHaiMang(A,B,C,n,m,k);
    printf("\nMang C gom cac phan tu: ");
    xuatMang(C,k);
}
