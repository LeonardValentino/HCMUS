#include <iostream>
using namespace std;

struct Diem2D{
    float x;
    float y;
};

void nhapDiem(Diem2D &a)
{
    cout << "\nNhap hoanh do: "; cin >> a.x;
    cout << "\nNhap tung do:  "; cin >> a.y;
}

void duongThang(Diem2D M, Diem2D N)
{
    float a = (M.y - N.y)/(M.x - N.x);
    float b = (N.y * M.x - N.x*M.y)/(M.x - N.x);
    
    cout << "Phuong trinh duong thang can tim " << "y = " << a << "*x + " << b;
}

int main()
{
    Diem2D M,N;
    cout << "Nhap diem M: ";
    nhapDiem(M);
    cout << "Nhap diem N: ";
    nhapDiem(N);
    duongThang(M,N);
    return 0;
}
