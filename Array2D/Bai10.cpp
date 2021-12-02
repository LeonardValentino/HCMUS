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

void demChuSo(int a[][100], int b[],int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            int temp = a[i][j];
            while(temp != 0)
            {
                int num = temp % 10;
                b[num]++;
                temp /= 10;
            }
        }
    }
}

void xuatChuSoXuatHienNhieuNhat(int a[][100], int dong, int cot)
{
    int b[10] = {0};
    demChuSo(a,b,dong,cot);
    int MAX = b[0];
    for(int i = 1; i < 10; i++)
    {
        if(b[i] > MAX)
            MAX = b[i];
    }
    for(int i = 0; i < 10; i++)
    {
        if(b[i] == MAX)
            printf("%d  ", i);
    }
}

int main()
{
    int a[100][100], dong,cot;
    printf("Nhap ma tran: \n");
    nhapMaTran(a,dong,cot);
    printf("Ma tran vua nhap la: \n");
    xuatMaTran(a,dong,cot);
    printf("Chu so xuat hien nhieu nhat trong ma tran la: "); xuatChuSoXuatHienNhieuNhat(a,dong,cot);
    return 0;
}
