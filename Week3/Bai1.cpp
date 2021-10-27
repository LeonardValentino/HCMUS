#include <iostream>
#include <cmath>

using namespace std;

void bai1()
{
    float so_thu_1,so_thu_2,so_thu_3,so_thu_4;
    cout << "Nhap so thu 1: "; cin >> so_thu_1;
    cout << "Nhap so thu 2: "; cin >> so_thu_2;
    cout << "Nhap so thu 3: "; cin >> so_thu_3;
    cout << "Nhap so thu 4: "; cin >> so_thu_4;
    float so_lon_nhat = so_thu_1;
    so_lon_nhat = so_lon_nhat > so_thu_2 ? so_lon_nhat : so_thu_2;
    so_lon_nhat = so_lon_nhat > so_thu_3 ? so_lon_nhat : so_thu_3;
    so_lon_nhat = so_lon_nhat > so_thu_4 ? so_lon_nhat : so_thu_4;

    cout << "So lon nhat trong 4 so thuc la: " << so_lon_nhat;
}