// 21127054_Week8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "tinhtoan.h"
#include "xulymatran.h"
#include "demsoluong.h"
#include "kiemtra.h"

int main()
{
	int luachon;
	printf("----------------------- Cac chuc nang cua chuong trinh ---------------------");
	printf("\n| 1. Tinh tong cac phan tu duong trong ma tran.                            |");
	printf("\n| 2. Dem so luong so nguyen to trong ma tran.                              |");
	printf("\n| 3. Tim so lon nhat tren bien ma tran.                                    |");
	printf("\n| 4. Tim so duong nho nhat trong ma tran.                                  |");
	printf("\n| 5. Liet ke cac dong co chua gia tri am trong ma tran.                    |");
	printf("\n| 6. Liet ke cac dong chua toan so chan trong ma tran.                     |");
	printf("\n| 7. Dem so luong gia tri yen ngua tren ma tran.                           |");
	printf("\n| 8. Dem so luong gia tri hoang hau tran ma tran.                          |");
	printf("\n| 9. Tong cac phan tu cuc tri tren ma tran.                                |");
	printf("\n| 10.Tim chu so xuat hien nhieu nhat trong ma tran.                        |");
	printf("\n| 11.Sap xep cac gia tri bien cua ma tran tang dan theo chieu kim dong ho. |");
	printf("\n|__________________________________________________________________________|");
	do
	{
		printf("\nNhap lua chon: ");
		scanf_s("%d", &luachon);
		switch (luachon)
		{
		case 1:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma Tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("Tong cac so duong trong ma tran la: %d", tinhTongSoDuongMaTran(a, dong, cot));
			break;
		}
		case 2:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma tran da nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("So luong so nguyen to trong ma tran la: %d", demSoNguyenTo(a, dong, cot));
			break;
		}
		case 3:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma tran da nhap la: \n");
			xuatMaTran(a, dong, cot);

			printf("So lon nhat tren bien ma tran la: %d", timMaxTrenBien(a, dong, cot));
			break;
		}
		case 4:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);

			int duongNhoNhat = timSoDuongNhoNhat(a, dong, cot);
			if (duongNhoNhat == 0)
				printf("Ma tran khong co so duong.");
			else
			{
				printf("So duong nho nhat trong ma tran la: %d", duongNhoNhat);
			}
			break;
		}
		case 5:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("Chi so dong co chua gia tri am trong ma tran la: ");
			xuatDongCoSoAm(a, dong, cot);
			break;
		}
		case 6:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("Chi so dong trong ma tran chua toan la so chan: "); xuatDongToanChan(a, dong, cot);
			break;
		}
		case 7:
		{
			int a[100][100];
			int dong, cot;
			nhapMaTran(a, dong, cot);
			printf("Ma tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("So luong yen ngua trong ma tran la: %d", xuatYenNgua(a, dong, cot));
			break;
		}
		case 8:
		{
			int a[100][100], dong, cot;
			nhapMaTran(a, dong, cot);
			xuatMaTran(a, dong, cot);
			printf("\nSo luong phan tu hoang hau la:  %d", demSoLuongPhanTuHoangHau(a,dong,cot));
			break;
		}
		case 9:
		{
			int a[100][100];
			int dong, cot;
			printf("Nhap ma tran: \n");
			nhapMaTran(a, dong, cot);
			printf("Ma tran da nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("Tong cac cuc tri trong ma tran la: %d", tongCuctri(a, dong, cot));
			break;
		}
		case 10:
		{
			int a[100][100], dong, cot;
			printf("Nhap ma tran: \n");
			nhapMaTran(a, dong, cot);
			printf("Ma tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);
			printf("Chu so xuat hien nhieu nhat trong ma tran la: "); xuatChuSoXuatHienNhieuNhat(a, dong, cot);
			break;
		}
		case 11:
		{
			int a[100][100], dong, cot;
			printf("Nhap ma tran: \n");
			nhapMaTran(a, dong, cot);
			printf("Ma tran vua nhap la: \n");
			xuatMaTran(a, dong, cot);
			sapXepMaTran(a, dong, cot);
			printf("Ma tran sau khi sap xep: \n");
			xuatMaTran(a, dong, cot);
			break;
		}
		}
	} while (luachon == 1 || luachon == 2 || luachon == 3 || luachon == 4 || luachon == 5 || luachon == 6 || luachon == 7 || luachon == 8 || luachon == 9 || luachon == 10 || luachon == 11);
}