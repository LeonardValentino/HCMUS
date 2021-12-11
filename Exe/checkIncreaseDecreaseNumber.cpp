#include <iostream>
#include <math.h>
using namespace std;

void kiemTraChuSo(int n)
{
    int a[100];
    int dem = 0;
    while(n != 0)
    {
       a[dem++] = n % 10;
       n /= 10;
    }
    int demtang = 0, demgiam = 0;
    for(int i = 0; i < dem - 1; i++)
    {
        if(a[i] > a[i + 1])
            demtang++;
        else if(a[i] < a[i + 1])
            demgiam++;
    }

    if(demtang == dem - 1)
        cout << "So ban da nhap la so tang dan.";
    else if(demgiam == dem - 1)
        cout << "So ban nhap la so giam dan.";
    else cout << "So ban nhap khong la so tang dan cung khong phai so giam dan.";
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so n: "; cin >> n;
        if(n < 0)
            cout << "So ban nhap khong hop le. Xin nhap lai.\n";
    } while (n < 0);
    kiemTraChuSo(n);
    return 0;
}
