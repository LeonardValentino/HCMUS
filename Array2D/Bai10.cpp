#include <stdio.h>
#include <math.h>

void nhapMaTran(int a[][100], int &dong, int &cot)
{
    do
    {
        printf("Nhap so dong: ");
        scanf("%d", &dong);
        if(dong < 0)
            printf("Dong la so duong. Xin nhap lai.\n");
    } while (dong < 0);

    do
    {
        printf("Nhap so cot: ");
        scanf("%d", &cot);
        if(dong < 0)
            printf("Cot la so duong. Xin nhap lai.\n");
    } while (dong < 0);

    int dem = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("Nhap phan tu thu %d: ",dem++);
            scanf("%d", &a[i][j]);
        }
    }
    
}

void xuatMaTran(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}

int demSoLanXuatHien(int a[][100], int dong, int cot, int n)
{
    int dem = 1;
    for(int i = 0; i < dong; i++)
    {
        for(int j  = 0; j < cot; j++)
        {
            if(a[i][j] == n)
                dem++;
        }
    }
    return dem;
}

int phanTuXuatHienNhieuNhat(int a[][100], int dong, int cot)
{
    int maxCount = demSoLanXuatHien(a, dong,cot, a[0][0]);
    for(int i = 0; i < dong; i++)
    {
        for(int j  = 0; j < cot; j++)
        {
            if(demSoLanXuatHien(a,dong,cot,a[i][j]) > maxCount)
                maxCount = a[i][j];
        }
    }
    return maxCount;
}

int main()
{
    int a[100][100], dong,cot;
    printf("Nhap ma tran: \n");
    nhapMaTran(a,dong,cot);
    printf("Ma tran vua nhap la: \n");
    xuatMaTran(a,dong,cot);
    printf("Phan tu xuat hien nhieu nhat trong ma tran la: %d", phanTuXuatHienNhieuNhat(a,dong,cot));
}
