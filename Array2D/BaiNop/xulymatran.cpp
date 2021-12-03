#include "xulymatran.h"
#include <stdio.h>

void nhapMaTran(int a[][100], int& dong, int& cot)
{
    do
    {
        printf("Nhap so dong: ");
        scanf_s("%d", &dong);
        if (dong < 0)
            printf("So dong phai duong. Xin nhap lai.\n");
    } while (dong < 0);

    do
    {
        printf("Nhap so cot: ");
        scanf_s("%d", &cot);
        if (cot < 0)
            printf("So cot phai duong. Xin nhap lai.\n");
    } while (cot < 0);

    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("Nhap phan tu trong ma tran: ");
            scanf_s("%d", &a[i][j]);
        }
    }
}

void xuatMaTran(int a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%4d  ", a[i][j]);
        }
        printf("\n");
    }
}

int timMaxTrenBien(int a[][100], int dong, int cot)
{
    int i = 0, j = 0;
    int MAX = a[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i == 0 || j == 0 || i == dong - 1 || j == cot - 1)
            {
                if (a[i][j] > MAX)
                    MAX = a[i][j];
            }
        }
    }
    return MAX;
}

int timSoDuongNhoNhat(int a[][100], int dong, int cot)
{
    int minDuong = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] > 0)
            {
                minDuong = a[i][j];
                break;
            }

        }
    }

    if (minDuong == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < dong; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                if ((a[i][j] > 0) && (a[i][j] < minDuong))
                    minDuong = a[i][j];
            }
        }
    }
    return minDuong;
}

void xuatDongCoSoAm(int a[][100], int dong,int cot)
{
    for (int i = 0; i < dong; i++)
    {
        int check = 0;
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] < 0)
                check = 1;
            break;
        }
        if (check == 1)
            printf("%d ", i);
    }
}

void xuatDongToanChan(int a[][100], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        int dem = 0;
        for (int j = 0; j < cot; j++)
        {
            if (a[i][j] % 2 == 0)
                dem++;
        }
        if (dem == cot)
        {
            printf("%d ", i);
        }
    }
}

int timMaxTrenDong(int a[][100], int vtd, int cot)
{
    int MAX = a[vtd][0];
    for (int i = 0; i < cot; i++)
    {
        if (a[vtd][i] > MAX)
            MAX = a[vtd][i];
    }
    return MAX;
}

int timMinTrenCot(int a[][100], int dong, int vtc)
{
    int MIN = a[0][vtc];
    for (int i = 0; i < dong; i++)
    {
        if (a[i][vtc] < MIN)
            MIN = a[i][vtc];
    }
    return MIN;
}


int xuatYenNgua(int a[][100], int dong, int cot)
{
    int dem = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (timMaxTrenDong(a, i, cot) == a[i][j] && timMinTrenCot(a, dong, j) == a[i][j])
                dem++;
        }
    }
    return dem;
}

void sapXepMang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
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
    for (i, j; j < cot; j++)
        a[i][j] = b[dem++];
    i++; j--;
    for (i, j; i < dong; i++)
        a[i][j] = b[dem++];
    i--; j--;
    for (i, j; j >= 0; j--)
        a[i][j] = b[dem++];
    i--; j++;
    for (i, j; i > 0; i--)
        a[i][j] = b[dem++];
}

void sapXepMaTran(int a[][100], int dong, int cot)
{
    int b[100];
    int sizeb = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i == 0 || i == dong - 1)
            {
                b[sizeb++] = a[i][j];
            }
            else if (j == 0 || j == cot - 1)
            {
                b[sizeb++] = a[i][j];
            }
        }
    }

    sapXepMang(b, sizeb);
    sapXepBien(a, b, dong, cot);
}

void demChuSo(int a[][100], int b[], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            int temp = a[i][j];
            while (temp != 0)
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
    int b[10] = { 0 };
    demChuSo(a, b, dong, cot);
    int MAX = b[0];
    for (int i = 1; i < 10; i++)
    {
        if (b[i] > MAX)
            MAX = b[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (b[i] == MAX)
            printf("%d  ", i);
    }
}