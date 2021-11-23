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

int timSoDuongNhoNhat(int a[][100], int dong, int cot)
{
    int minDuong = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] > 0)
            {
                minDuong = a[i][j];
                break;
            }

        }
    }
    
    if(minDuong == 0)
    {
        return 0;
    }
    else
    {
        for(int i = 0; i < dong; i++)
        {
            for(int j = 0; j < cot; j++)
            {
                if((a[i][j] > 0) && (a[i][j] < minDuong))
                    minDuong = a[i][j];
            }
        }
    }
    return minDuong;
}

int main()
{
    int a[100][100];
    int dong,cot;
    nhapMaTran(a,dong,cot);
    printf("Ma tran vua nhap la: \n");
    xuatMaTran(a,dong,cot);

    int duongNhoNhat = timSoDuongNhoNhat(a,dong,cot);
    if(duongNhoNhat == 0)
        printf("Ma tran khong co so duong.");
    else
    {
        printf("So duong nho nhat trong ma tran la: %d", duongNhoNhat);
    }
    return 0;
}
