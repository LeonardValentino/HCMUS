#include "DemSo.h"
#include <stdio.h>

int countMinusNumber(float a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			count++;
	}
	return count;
}

int demPhanTuTanCung6VaChiaHetCho6(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 10 == 6 && a[i] % 6 == 0)
		{
			dem++;
		}
	}
	return dem;
}

int demSoNguyenToPhanBiet(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemTraNguyenTo(a[i]) == true && kiemTraTrung(a, n, i) == true)
			dem++;
	}
	return dem;
}