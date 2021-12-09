#include <iostream>
using namespace std;

void chuyenDia(int n, char a, char b, char c)
{
    if(n == 1)
        cout << "\nChuyen dia " << n << " tu " << a << " sang " << b;
    else
    {
        chuyenDia(n-1,a,c,b);
        cout << "\nChuyen dia " << n << " tu " << a << " sang " << b;
        chuyenDia(n - 1, c,b,a);
    }
}

int main()
{
    int n;
    cout << "Nhap so dia: "; cin >> n;
    chuyenDia(n,'A','B','C');
}
