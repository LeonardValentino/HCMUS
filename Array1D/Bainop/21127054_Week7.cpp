// 21127054_Week7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "Xylymang.h"
#include "DemSo.h"
#include "kiemtra.h"
#include "tinhtoan.h"
#include "xulynhiphan.h"
int main()
{
	printf("---------------------------- Chuc nang cua chuong trinh ---------------------------------");
	printf("\n| 1. Nhap vao mot mang so thuc va dem so luong so am co trong mang.                    |");
	printf("\n| 2.Nhap vao mot so nguyen va chuyen so nguyen do sang dang so nhi phan 8 bit.         |");
	printf("\n| 3.Nhap vao mot so nhi phan 16 bit va chuyen so nhi phan do thanh so thap phan.       |");
	printf("\n| 4.Nhap vao mot mang gom n gia tri nguyen va mot so nguyen X, chuong trinh se:        |");
	printf("\n|    a.In gia tri va vi tri cua uoc so cua X trong mang so nguyen.                     |");
	printf("\n|    b.Don cac phan tu la uoc cua X ve cuoi mang va sap xep cac so khong phai la uoc.  |");
	printf("\n| 5.Nhap vao mot mang cac so nguyen duong gom n phan tu (1 <= n <= 15),chuong trinh se:|");
	printf("\n|    a.Dem so phan tu tan cung la 6 va chia het cho 6.                                 |");
	printf("\n|    b.Tinh trung binh cong cac so nguyen to co trong mang.                            |");
	printf("\n|    c.Cho biet mang co bao nhieu so nguyen to phan biet.                              |");
	printf("\n| 6.Nhap mang so nguyen gom n phan tu (n < 1000) va [A[i] <= 10000, chuogn trinh se:   |");
	printf("\n|    a.Trich cac phan tu trong A khong phai so nguyen to ra mang B.                    |");
	printf("\n|    b.Sap giam cac so nguyen trong mang B.                                            |");
	printf("\n|    c.Xoa nhung so nguyen to trong mang A.                                            |");
	printf("\n| 7.Nhap 2 day so nguyen A, B gom m,n phan tu (1 <= n,m <= 25), chuong trinh se:       |");
	printf("\n|    a.Xuat cac phan tu co trong mang A nhung khong co trong mang B.                   |");
	printf("\n|    b.Ghep A,B thanh C sao cho C khong co cac phan tu trung nhau.                     |");
	printf("\n|______________________________________________________________________________________|");

	
	
	int luachon;
	do
	{
		printf("\nNhap lua chon cua ban: ");
		scanf_s("%d", &luachon);
		switch (luachon)
		{
		case 1:
		{
			float a[100];
			int n = 0;
			setArray(a, n);
			printf("Mang vua nhap la: ");
			printArray(a, n);
			printf("\nSo luong chu so am trong mang la: %d", countMinusNumber(a, n));
			break;
		}
		case 2:
		{
			int a[9] = { 0 };
			int n;
			do
			{
				printf("Nhap so nguyen can doi sang nhi phan: ");
				scanf_s("%d", &n);
				if (n < -255 || n > 255)
					printf("So ban nhap khong hop le. Xin nhap lai.\n");
			} while (n < -255 || n > 255);
			binToDec(a, n);
			if (n < 0)
			{
				minusNumber(a);
				printf("\nSo nhi phan da doi la: ");
				printResult(a);
			}
			else
			{
				printf("\nSo nhi phan da doi la: ");
				printResult(a);
			}
			break;
		}
		case 3:
		{
			int a[16] = { 0 };
			long long int n3;
			enterBinary(a, n3);
			printf("\nSo thap phan doi duoc tu so nhi phan da nhap: %d", binToDec(a));
			break;
		}
		case 4:
		{
			int a[10000];
			int n4 = 0, X = 0;
			setArray4(a, n4);
			printf("Cac phan tu nguyen vua nhap vao mang: ");
			printArray(a, n4);
			printf("\nNhap vao gia tri cua X: ");
			scanf_s("%d", &X);
			sapXepMang(a, n4, X);
			break;
		}
		case 5:
		{
			int a[15];
			int n6;
			setArray5(a, n6);
			printArray(a, n6);
			printf("\nSo phan tu co tan cung la 6 va chia het cho 6 la: %d", demPhanTuTanCung6VaChiaHetCho6(a, n6));
			printf("\nTrung binh cong cac phan tu trong mang la: %f", tinhTrungBinhCongMang(a, n6));
			printf("\nSo luong cac so nguyen to phan biet trong mang la: %d", demSoNguyenToPhanBiet(a, n6));
			break;
		}
		case 6:
		{
			int a[100], b[100];
			int n6, nB = 0;
			setArray6(a, n6);
			printf("Mang vua nhap: ");
			printArray(a, n6);
			trichPhanTuKhongPhaiNguyenTo(a, n6, b, nB);
			printf("\nMang B sau khi duoc trich cac phan tu khong phai so nguyen to: ");
			printArray(b, nB);
			sapXepMang(b, nB);
			printf("\nMang B sau khi duoc sap xep: ");
			printArray(b, nB);
			xoaPhanTuNguyenTo(a, n6);
			printf("\nMang A sau khi xoa cac phan tu nguyen to la: ");
			printArray(a, n6);
			break;
		}
		case 7:
		{
			int A[25], B[25];
			int n7, m7;
			printf("Nhap mang A: \n");
			setArray7(A, n7);
			printf("Nhap mang B: \n");
			setArray7(B, m7);

			printf("\nMang A da nhap: ");
			printArray(A, n7);
			printf("\nMang B da nhap: ");
			printArray(B, m7);
			printf("\nCac phan tu co trong mang A nhung khong co trong mang B: ");
			xuatPhanTuCoTrongAKhongCoTrongB(A, B, n7, m7);

			int C[50];
			int k;
			ghepHaiMang(A, B, C, n7, m7, k);
			printf("\nMang C gom cac phan tu: ");
			printArray(C, k);
			break;
		}
		default:
			printf("\nChuong trinh ket thuc.");
			break;
		}
	} while (luachon == 1 || luachon == 2 || luachon == 3 || luachon == 4 || luachon == 5 || luachon == 6 || luachon == 7);
}
