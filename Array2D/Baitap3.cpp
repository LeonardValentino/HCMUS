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

int timMaxTrenBien(int a[][100], int dong, int cot)
{
    int i = 0, j = 0;
    int MAX = a[0][0];
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(i == 0 || j == 0 || i == dong - 1 || j == cot - 1)
            {
                if(a[i][j] > MAX)
                    MAX = a[i][j];
            }
        }
    }
    return MAX;
}

int main()
{
    int a[100][100];
    int dong,cot;
    nhapMaTran(a,dong,cot);
    printf("Ma tran da nhap la: \n");
    xuatMaTran(a,dong,cot);

    printf("So lon nhat tren bien ma tran la: %d", timMaxTrenBien(a,dong,cot));
    return 0;
}
