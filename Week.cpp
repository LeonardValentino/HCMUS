#include <stdio.h>
#include <math.h>

int bai1()
{
    float bankinh, Pi = 3.14;
	float chuvi, dientich;
	printf("Nhap ban kinh cua hinh tron: ");
	scanf_s("%f", &bankinh);
	chuvi = 2 * Pi * bankinh;
	dientich = Pi * bankinh * bankinh;
	printf("Chu vi cua hinh tron la: %f", chuvi);
	printf("\nDien tich cua hinh tron la: %f", dientich);
	return 0;
}

int bai2()
{
    float chieudai, chieurong;
	float chuvi, dientich;
	printf("Nhap chu vi hinh chu nhat: ");
	scanf_s("%f", &chuvi);
	chieurong = chuvi / 5;
	chieudai = chieurong * 1.5;
	dientich = chieudai * chieurong;
	printf("Dien tich hinh chu nhat la: %f", dientich);
}

int bai3()
{
    int N;
	int to_10dong = 0, to_5dong = 0, to_2dong = 0, to_1dong = 0;
	printf("Nhap vao so tien can doi: ");
	scanf_s("%d", &N);
	to_10dong = N / 10;
	N = N - (10 * to_10dong);
	to_5dong = N / 5;
	N = N - (5 * to_5dong);
	to_2dong = N / 2;
	N = N - (2 * to_2dong);
	to_1dong = N;
	printf("Doi duoc: %d to 10 dong, %d to 5 dong, %d to 2 dong, %d to 1 dong.", to_10dong, to_5dong, to_2dong, to_1dong);
	return 0;
}

int bai4()
{
    float x;
    float y1, y2;
    printf("Nhap so thuc x: ");
    scanf_s("%f", &x);
    y1 = x / 3;
    y2 = x / 7;
    printf("Gia tri y1 = x/3 la %.2f", y1);
    printf("\nGia tri y2 = x/7 la %.2f", y2);
    return 0;
}

int bai5()
{
	int n;
    float x;
    printf("Nhap vao so nguyen n: ");
    scanf_s("%d", &n);
    printf("Nhap vao so thuc x: ");
    scanf_s("%f", &x);
    float answer = pow((x * x) + 1, n);
    printf("Ket qua cua bieu thuc can tinh la: %f", answer);
    return 0;
}

int bai6()
{
	float Pi = 3.14;
	float dientich;
	float bankinh;
	printf("Nhap dien tich hinh tron: ");
	scanf_s("%f", &dientich);
	bankinh = sqrt(dientich / Pi);
	printf("Gia tri ban kinh cua hinh tron: %f", bankinh);
	return 0;
}

int bai7()
{
	int n;
    float x;
    printf("Nhap so nguyen n: ");
    scanf_s("%d", &n);
    printf("Nhap so thuc x: ");
    scanf_s("%f", &x);
    float answer = pow((x * x) + x + 1, n) + pow((x * x) - x + 1, n);
    printf("Ket qua cua bieu thuc f(X) = (x^2 + x + 1)^n + (x^2 - x + 1)^n la: %f", answer);
    return 0;
}

int bai8()
{
	float m;    // m la so tien gui ban dau
    int n;      // n la so thang gui
    float q;    // q la lai suat hang thang
    printf("Nhap so tien gui: ");
    scanf_s("%f", &m);
    printf("Nhap vao so thang gui: ");
    scanf_s("%d", &n);
    printf("Nhap vao lai sua cua ngan hang (neu nhap 1 thi lai suat la 0.01): ");
    scanf_s("%f", &q);
    q = q / 100;
    float tongtiencolai = m * pow(1 + q, n);
    float tienlai = tongtiencolai - m;
    printf("So tien lai la: %.0f", tienlai);
    return 0;
}
