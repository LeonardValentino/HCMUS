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

int timMaxTrenDong(int a[][100], int vtd, int cot)
{
    int MAX = a[vtd][0];
    for(int i = 0; i < cot; i++)
    {
        if(a[vtd][i] > MAX)
            MAX = a[vtd][i];
    }
    return MAX;
}

int timMinTrenCot(int a[][100], int dong, int vtc)
{
    int MIN = a[0][vtc];
    for(int i = 0; i < dong; i++)
    {
        if(a[i][vtc] < MIN)
            MIN = a[i][VTC];
    }
    return MIN;
}


void xuatYenNgua(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(timMaxTrenDong(a,i,cot) == a[i][j] && timMinTrenCot(a,dong,j) == a[i][j])
                printf("%d  ", a[i][j]);
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
    
}