#include <iostream>
#include <cmath>

void bai5()
{
    int n;
    do
    {
        cout << "Nhap n: "; cin >> n;
        if(n <= 0)  
            cout << "Phai nhap n la so nguyen duong.\n";
    } while (n <= 0);
    int i = 0;
    while(i * i <= n)
    {
        if(i*i == n)
        {
            cout << n << " la so chinh phuong.";
             // return 0;
        }
        ++i;
    }
    cout << n << " khong phai la so chinh phuong.";

}