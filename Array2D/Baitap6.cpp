#include <stdio.h>
#include <math.h>

void nhapMaTran(int a[][100], int &dong, int &cot)
{
    do
    {
        printf("Nhap so dong: ");
        scanf_s("%d",&dong);
        if(dong < 0)
            printf("So dong phai duong. Xin nhap lai.\n");
    } while (dong < 0);
    
    do
    {
        printf("Nhap so cot: ");
        scanf_s("%d", &cot);
        if(cot < 0)
            printf("So cot phai duong. Xin nhap lai.\n");
    } while (cot < 0);

    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("Nhap phan tu trong ma tran: ");
            scanf_s("%d", &a[i][j]);
        }
    }   
}

void xuatMaTran(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
}

void xuatDongToanChan(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        int dem = 0;
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] % 2 == 0)
                dem++;
        }
        if(dem == cot)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int a[100][100];
    int dong, cot;
    nhapMaTran(a,dong,cot);
    printf("Ma tran vua nhap la: \n");
    xuatMaTran(a,dong,cot);
    printf("Cac dong trong ma tran chua toan la so chan: "); xuatDongToanChan(a,dong,cot);
    return 0;   // xem lai xuat chi so hay so dong
}