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
        if(cot < 0)
            printf("Cot la so duong. Xin nhap lai.\n");
    } while (cot < 0);

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
            printf("%3d  ", a[i][j]);
        }
        printf("\n");
    }
}

void sapXepMang(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sapXepBien(int a[][100], int b[], int dong, int cot)
{
    int i = 0, j = 0;
    int dem = 0;
    for(i,j; j < cot; j++)
        a[i][j] = b[dem++];
    i++; j--;
    for(i,j; i < dong; i++)
        a[i][j] = b[dem++];
    i--; j--;
    for(i,j; j >= 0;j--)
        a[i][j] = b[dem++];
    i--; j++;
    for(i,j; i > 0; i--)
        a[i][j] = b[dem++];
}

void sapXepMaTran(int a[][100], int dong, int cot)
{
    int b[100];
    int sizeb = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(i == 0 || i == dong - 1)
            {
                b[sizeb++] = a[i][j];
            }
            else if(j == 0 || j == cot - 1)
            {
                b[sizeb++] = a[i][j];
            }
        }
    }
    
    sapXepMang(b,sizeb);
    sapXepBien(a,b,dong,cot);
}

int main()
{
    int a[100][100], dong,cot;
    printf("Nhap ma tran: \n");
    nhapMaTran(a,dong,cot);
    printf("Ma tran vua nhap la: \n");
    xuatMaTran(a,dong,cot);
    sapXepMaTran(a,dong,cot);
    printf("Ma tran sau khi sap xep: \n");
    xuatMaTran(a,dong,cot);
}
