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

bool kiemTraSoNguyenTo(int n)
{
    if(n < 2)
        return false;
    else if(n % 2 == 0 && n != 2)
        return false;
    else
    {
        for(int i = 3; i <= sqrt(n); i++)
        {
            if(n % i == 0)
                return false;
        }
    }
    return true;
}

int demSoNguyenTo(int a[][100], int dong, int cot)
{
    int count = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(kiemTraSoNguyenTo(a[i][j]) == true)
                count++;
        }
    }
    return count;
}

int main()
{
    int a[100][100];
    int dong, cot;
    nhapMaTran(a,dong,cot);
    printf("Ma tran da nhap la: \n");
    xuatMaTran(a,dong,cot);
    printf("So luong so nguyen to trong ma tran la: %d", demSoNguyenTo(a,dong,cot));
}
