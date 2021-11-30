#include <stdio.h>
#include <math.h>

void nhapMatran(int a[][100], int &dong, int &cot)
{
    do
    {
        printf("Nhap so dong: ");
        scanf("%d", &dong);
    } while (dong < 0);

    do
    {
        printf("Nhap so cot:  ");
        scanf("%d", &cot);
    } while (cot < 0);
    
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("Nhap gia tri a[%d][%d]: ", i ,j);
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
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

bool kiemTraCucTri(int a[][100], int vtd, int vtc, int dong, int cot)
{
    bool cucDai = true, cucTieu = true;

    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            if(vtd + i >= 0 && vtc + j >= 0 && vtd + i < dong && vtc + j < cot && !(i == 0 && j == 0))  // do khi i j bang khong se la chinh so can so sanh nen bo qua
            {
                if(a[vtd][vtc] <= a[vtd + i][vtc + j])
                    cucDai = false;
                if(a[vtd][vtc] >= a[vtd + i][vtc + j])
                    cucTieu = false;
                if(cucDai == false && cucTieu == false)
                    break;
            }
        }
    }
    if(cucDai == false && cucTieu == false)
        return false;
    return true;
}

int tongCuctri(int a[][100], int dong, int cot)
{
    int sum = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(kiemTraCucTri(a,i,j,dong,cot) == true)
                sum += a[i][j];
        }
    }
    return sum;
}


int main()
{
    int a[100][100];
    int dong,cot;
    printf("Nhap ma tran: \n");
    nhapMatran(a, dong,cot);
    printf("Ma tran da nhap la: \n");
    xuatMaTran(a,dong,cot);
    printf("Tong cac cuc tri trong ma tran la: %d", tongCuctri(a,dong,cot));
    return 0;
}
