// 21127054_FILE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>


struct phanso {
	float tu;
	float mau;
};

struct Diem2D{
	float x;
	float y;
};

struct DuongTron2D {
	Diem2D tam;
	float R;
};

bool kiemTraNguyenTo(int n)
{
	if (n < 2)
		return false;
	else if (n % 2 == 0 && n != 2)
		return false;
	else
	{
		for (int i = 3; i <= n / 2; i++)
		{
			if (n % i == 0)
				return false;
		}
	}
	return true;
}

bool docSoNguyenDuong(const char* fname, int &m, int &n)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;

	fscanf(f, "%d %d", &m, &n);
	fclose(f);
	return true;
}

bool inSoNguyenTo(const char* fname, int m, int n)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");

	if (f == NULL)
		return false;
	if (m > n)
		fprintf(f, "Do m lon hon n nen chuong trinh khong thuc hien duoc.");
	else
	{
		fprintf(f, "Cac so nguyen to trong doan tu M den N la: ");
		for(int i = m; i <= n; i++)
		{
			if (kiemTraNguyenTo(i) == true)
				fprintf(f, "%d ", i);
		}
	}
	fclose(f);
	return true;
}

bool docMaTran(const char* fname,int a[][100], int& dong, int& cot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");

	if (f == NULL)
		return false;
	fscanf(f,"%d %d\n", &dong, &cot);

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			fscanf(f, "%d ", &a[i][j]);
		}
		fscanf(f, "\n");
	}

	fclose(f);
	return true;
}


bool xuatMaTran(const char* fname,int a[][100], int dong, int cot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");

	if (f == NULL)
		return false;
	fprintf(f,"Ma tran da doc la: \n");
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			fprintf(f, "%d ", a[i][j]);
		}
		fprintf(f,"\n");
	}

	fclose(f);
	return true;
}

bool docPhanSo(const char* fname, phanso& a)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");

	if (f == NULL)
		return false;
	fscanf(f, "%f %f", &a.tu, &a.mau);

	fclose(f);
	return true;
}

bool xuatPhanSo(const char* fname, phanso a)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	
	if (f == NULL)
		return false;
	fprintf(f, "Phan so vua nhap la: %.2f/%.2f", a.tu, a.mau);

	fclose(f);
	return true;
}

bool docDayPhanSo(const char* fname, phanso A[100], int &soLuong)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;
	fscanf(f, "%d\n", &soLuong);
	for (int i = 0; i < soLuong; i++)
	{
		fscanf(f, "%f %f\n", &A[i].tu, &A[i].mau);
	}

	fclose(f);
	return true;
}

bool xuatDayPhanSo(const char* fname, phanso A[100], int soLuong)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;
	fprintf(f, "Day phan so vua nhap la: ");

	for (int i = 0; i < soLuong; i++)
	{
		fprintf(f, "%.2f/%.2f ", A[i].tu, A[i].mau);
	}
	fclose(f);
	return true;
}

bool docDiem2D(const char* fname, Diem2D& a)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;
	fscanf(f, "%f %f", &a.x, &a.y);
	fclose(f);
	return true;
}

bool xuatDiem2D(const char* fname, Diem2D a)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;
	fprintf(f, "Diem 2D da nhap: (%.1f;%.1f)", a.x, a.y);
	fclose(f);
	return true;
}


bool docDayDiem2D(const char* fname, Diem2D D[100], int& soLuong)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if(f == NULL)
		return false;
	fscanf(f, "%d\n", &soLuong);

	for (int i = 0; i < soLuong; i++)
	{
		fscanf(f, "%f %f\n", &D[i].x, &D[i].y);
	}
	fclose(f);
	return true;
}

bool xuatDayDiem2D(const char* fname, Diem2D D[100], int soLuong)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;
	fprintf(f, "Day diem 2D da doc la: ");
	for (int i = 0; i < soLuong; i++)
	{
		fprintf(f, "(%.1f;%.1f) ", D[i].x, D[i].y);
	}
	fclose(f);
	return true;
}

bool docDuongTron2D(const char* fname, DuongTron2D& dt)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;
	fscanf(f, "%f %f %f", &dt.tam.x, &dt.tam.y, &dt.R);
	fclose(f);
	return true;
}

bool xuatDuongTron2D(const char* fname, DuongTron2D dt)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;

	fprintf(f, "Duong tron 2D doc tu file: ((%.1f;%.1f);%.1f)", dt.tam.x, dt.tam.y, dt.R);
	fclose(f);
	return true;
}

bool docDayDuongTron2D(const char* fname, DuongTron2D DT[100], int& soLuong)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;
	fscanf(f, "%d\n", &soLuong);

	for (int i = 0; i < soLuong; i++)
	{
		fscanf(f, "%f %f %f", &DT[i].tam.x, &DT[i].tam.y, &DT[i].R);
	}
	fclose(f);
	return true;
}

bool xuatDayDuongTron2D(const char* fname, DuongTron2D DT[100], int soLuong)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;
	fprintf(f, "Mang duong tron 2D duoc doc tu file la: ");
	for (int i = 0; i < soLuong; i++)
	{
		fprintf(f, "((%.1f;%.1f);%.1f) ", DT[i].tam.x, DT[i].tam.y, DT[i].R);
	}
	fclose(f);
	return true;
}

bool docMaTranPhanSo(const char* fname, phanso a[100][100], int& nDong, int& nCot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;

	fscanf(f, "%d %d\n", &nDong, &nCot);
	for (int i = 0; i < nDong; i++)
	{
		for (int j = 0; j < nCot; j++)
		{
			fscanf(f, "%f/%f ", &a[i][j].tu, &a[i][j].mau);
		}
		fscanf(f, "\n");
	}
	fclose(f);
	return true;
}

bool xuatMaTranPhanSo(const char* fname, phanso a[100][100], int soDong, int soCot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;
	fprintf(f, "Ma tran phan so da doc la: \n");
	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			fprintf(f, "%4.2f/%.2f ", a[i][j].tu, a[i][j].mau);
		}
		fprintf(f, "\n");
	}
	
	fclose(f);
	return true;
}

bool docMaTranDiem2D(const char* fname, Diem2D a[100][100], int& nDong, int& nCot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;

	fscanf(f, "%d %d\n", &nDong, &nCot);
	for (int i = 0; i < nDong; i++)
	{
		for (int j = 0; j < nCot; j++)
		{
			fscanf(f, "(%f;%f) ", &a[i][j].x, &a[i][j].y);
		}
		fscanf(f, "\n");
	}
	fclose(f);
	return true;
}

bool xuatMaTranDiem2D(const char* fname, Diem2D a[100][100], int nDong, int nCot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;

	fprintf(f, "Ma tran diem 2D da doc: \n");
	for (int i = 0; i < nDong; i++)
	{
		for (int j = 0; j < nCot; j++)
		{
			fprintf(f, "(%.1f;%.1f) ", a[i][j].x, a[i][j].y);
		}
		fprintf(f, "\n");
	}
	fclose(f);
	return true;
}

bool docMaTranDuongTron2D(const char* fname, DuongTron2D a[100][100], int& nDong, int& nCot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "rt");
	if (f == NULL)
		return false;

	fscanf(f, "%d %d\n", &nDong, &nCot);
	for (int i = 0; i < nDong; i++)
	{
		for (int j = 0; j < nCot; j++)
		{
			fscanf(f, "((%f;%f);%f) ", &a[i][j].tam.x, &a[i][j].tam.y, &a[i][j].R);
		}
		fscanf(f, "\n");
	}
	fclose(f);
	return true;
}

bool xuatMaTranDuongTron2D(const char* fname, DuongTron2D a[100][100], int nDong, int nCot)
{
	FILE* f;
	errno_t errorcheck;
	errorcheck = fopen_s(&f, fname, "wt");
	if (f == NULL)
		return false;
	fprintf(f, "Ma tran duong tron 2D da doc la: \n");
	for (int i = 0; i < nDong; i++)
	{
		for (int j = 0; j < nCot; j++)
		{
			fprintf(f, "((%.1f;%.1f);%.1f) ", a[i][j].tam.x, a[i][j].tam.y, a[i][j].R);
		}
		fprintf(f, "\n");
	}
	fclose(f);
	return true;
}

int main()
{
	int luachon;
	do
	{
		phanso ps, A[100], MTPS[100][100];
		Diem2D d, D[100], MTD[100][100];
		DuongTron2D dt, DT[100], MTDT[100][100];
		int nPhanso, nDiem, nDuongTron, nDong1, nCot1, nDong2, nCot2, nDong3, nCot3;
		printf("\nNhap lua chon cua ban: ");
		scanf("%d", &luachon);
		switch (luachon)
		{
		case 1:
		{
			int m, n;
			const char* fname = "D:\\File\\input.txt";
			const char* dest = "D:\\File\\output.txt";
			bool checkDoc = docSoNguyenDuong(fname, m, n);
			if (checkDoc == true)
				printf("\nDoc file thanh cong.");
			else
			{
				printf("\nDoc file khong thanh cong.");
				return 0;
			}
			bool checkIn  = inSoNguyenTo(dest, m, n);
			if(checkIn == true)
			{
				printf("\nXuat file thanh cong.");
			}
			else
			{
				printf("\nXuat file khong thanh cong.");
			}
			break;
		}
		case 2:
		{
			int a[100][100], dong, cot;
			const char* fname = "D:\\File\\inputmatrix.txt";
			const char* dest = "D:\\File\\outputmatrix.txt";
			bool checkDocMaTran = docMaTran(fname, a, dong, cot);
			if (checkDocMaTran == true)
				printf("\nDoc file thanh cong.");
			else
				printf("\nDoc file thanh cong.");
			bool checkXuatMaTran = xuatMaTran(dest, a, dong, cot);
			if (checkXuatMaTran == true)
				printf("\nXuat file thanh cong.");
			else
				printf("\nXuat file khong thanh cong.");
			break;
		}
		case 3:
		{
			const char* fname = "D:\\File\\phanso.txt";
			bool checkDocPS = docPhanSo(fname, ps);
			if (checkDocPS == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatphanso.txt";
				bool checkXuatPS = xuatPhanSo(fname2, ps);
				if (checkXuatPS == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 4:
		{
			const char* fname = "D:\\File\\dayphanso.txt";
			bool checkDayPhanSo = docDayPhanSo(fname, A, nPhanso);
			if (checkDayPhanSo == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatmangphanso.txt";
				bool checkXuatDayPhanSo = xuatDayPhanSo(fname2, A, nPhanso);
				if (checkXuatDayPhanSo == true)
					printf("\nDa xuat day phan so thanh cong.");
				else
					printf("\nXuat day phan so khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 5:
		{
			const char* fname = "D:\\File\\diem.txt";
			bool checkDocDiem2D = docDiem2D(fname, d);
			if (checkDocDiem2D == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatdiem2D.txt";
				bool checkxuatDiem2D = xuatDiem2D(fname2, d);
				if (checkxuatDiem2D == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 6:
		{
			const char* fname = "D:\\File\\daydiem2D.txt";
			bool checkDocDayDiem2D = docDayDiem2D(fname, D, nDiem);
			if (checkDocDayDiem2D = true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatmangdiem2D.txt";
				bool checkXuatDayDiem2D = xuatDayDiem2D(fname2, D, nDiem);
				if (checkXuatDayDiem2D == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 7:
		{
			// hai phan tu dau la toa do 2 tam, phan tu thu 3 la ban kinh duong tron
			const char* fname = "D:\\File\\duongtron2D.txt";
			bool checkDocDuongTron2D = docDuongTron2D(fname, dt);
			if (checkDocDuongTron2D == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatduongtron2D.txt";
				bool checkXuatDuongTron2D = xuatDuongTron2D(fname2, dt);
				if (checkXuatDuongTron2D == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 8:
		{
			const char* fname = "D:\\File\\dayduongtron2D.txt";
			bool checkDocDayDuongTron2D = docDayDuongTron2D(fname, DT, nDuongTron);
			if (checkDocDayDuongTron2D == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatmangduongtron2D.txt";
				bool checkXuatDayDuongTron2D = xuatDayDuongTron2D(fname2, DT, nDuongTron);
				if (checkXuatDayDuongTron2D == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 9:
		{
			const char* fname = "D:\\File\\matranphanso.txt";
			bool checkMaTranPhanSo = docMaTranPhanSo(fname, MTPS, nDong1, nCot1);
			if (checkMaTranPhanSo == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatmatranphanso.txt";
				bool checkXuatMaTranPhanSo = xuatMaTranPhanSo(fname2, MTPS, nDong1, nCot1);
				if (checkXuatMaTranPhanSo == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 10:
		{
			const char* fname = "D:\\File\\matrandiem2D.txt";
			bool checkMaTranDiem2D = docMaTranDiem2D(fname, MTD, nDong2, nCot2);
			if (checkMaTranDiem2D == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatmatrandiem2D.txt";
				bool checkXuatMaTranDiem2D = xuatMaTranDiem2D(fname2, MTD, nDong2, nCot2);
				if (checkXuatMaTranDiem2D == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khong thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		case 11:
		{
			const char* fname = "D:\\File\\matranduongtron2D.txt";
			bool checkMaTranDuongTron2D = docMaTranDuongTron2D(fname, MTDT, nDong3, nCot3);
			if (checkMaTranDuongTron2D == true)
			{
				printf("Doc file thanh cong.");
				const char* fname2 = "D:\\File\\out\\xuatmatranduongtron2D.txt";
				bool checkXuatMaTranDuongTron2D = xuatMaTranDuongTron2D(fname2, MTDT, nDong3, nCot3);
				if (checkXuatMaTranDuongTron2D == true)
					printf("\nDa xuat file thanh cong.");
				else
					printf("\nXuat file khogn thanh cong.");
			}
			else
				printf("Doc file khong thanh cong.");
			break;
		}
		default:
			printf("Chuong trinh ket thuc.");
			break;
		}
	} while (luachon == 1 || luachon == 2 || luachon == 3 || luachon == 4 || luachon == 5 || luachon == 6 || luachon == 7
	|| luachon == 8 || luachon == 9 || luachon == 10 || luachon == 11);

	return 0;
}
