#include "Xylymang.h"
#include <stdio.h>
#include <math.h>
void setArray(int a[], int &n)
{
	do
	{
		printf("Nhap so phan tu trong mang: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("So luong phan tu duong. Xin nhap lai.\n");
	} while (n < 1);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf_s("%d", &a[i]);
	}
}

void setArray(float a[], int &n)
{
	do
	{
		printf("Nhap so phan tu trong mang: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("So luong phan tu duong. Xin nhap lai.\n");
	} while (n < 1);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf_s("%f", &a[i]);
	}
}

void setArray6(int a[], int& n)
{
	do
	{
		printf("Nhap vao so phan tu: ");
		scanf_s("%d", &n);
		if (n < 1 || n > 1000)
			printf("Mang co toi da 1000 pha tu. Xin nhap lai.\n");
	} while (n < 1 || n > 1000);

	for (int i = 0; i < n; i++)
	{
		do
		{
			printf("Nhap phan tu thu %d: ", i + 1);
			scanf_s("%d", &a[i]);
			if (abs(a[i]) > 10000)
				printf("|a[i]| co gia tri tuyet doi nho hon 10000. Xin nhap lai.\n");
		} while (abs(a[i]) > 10000);

	}
}

void setArray7(int a[], int& n)
{
	do
	{
		printf("Nhap vao so phan tu: ");
		scanf_s("%d", &n);
		if (n < 1 || n > 25)
			printf("Mang co toi da 25 pha tu. Xin nhap lai.\n");
	} while (n < 1 || n > 25);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf_s("%d", &a[i]);
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void printArray(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%0.2f ", a[i]);
	}
}

void hoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sapXepMang(int a[], int n, int X)
{
	int end = n - 1, start = 0;
	int b[1000];
	printf("Cac uoc cua %d la: ", X);
	for (int i = 0; i < n; i++)
	{
		if (X % a[i] == 0)
		{
			b[end--] = a[i];
		}
		else
		{
			b[start++] = a[i];
		}
	}
	
	for (int i = 0; i < end; i++)
	{
		for (int j = i + 1; j <= end; j++)
		{
			if (a[i] > a[j])
				hoanVi(a[i], a[j]);
		}
	}
	printf("\nMang sau khi sap xep cac phan tu khong phai la uoc: ");
	printArray(b, n);

}

void xoaPhanTuTrongMang(int a[], int& n, int index)
{
	for (int i = index; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void trichPhanTuKhongPhaiNguyenTo(int a[], int n, int b[], int& nB)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemTraNguyenTo(a[i]) == false)
			b[nB++] = a[i];
	}
}

void sapXepMang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
				hoanVi(a[i], a[j]);
		}
	}
}

void xoaPhanTuNguyenTo(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemTraNguyenTo(a[i]) == true)
		{
			xoaPhanTuTrongMang(a, n, i);
			i--;
		}
	}
}

void ghepHaiMang(int A[], int B[], int C[], int n, int m, int& k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		C[dem++] = A[i];
	}

	for (int j = 0; j < m; j++)
	{
		if (kiemTraTrung2(A, n, B[j]) == true)
			C[dem++] = B[j];
	}
	k = dem;
}

void xuatPhanTuCoTrongAKhongCoTrongB(int A[], int B[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < m; j++)
		{
			if (A[i] == B[j])
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ", A[i]);
		}
	}
}