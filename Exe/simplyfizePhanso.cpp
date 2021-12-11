#include <iostream>
using namespace std;

int uocChung(int a, int b)
{
    if(a == 0)
        return b;
    else if(b == 0)
        return a;
    
    if(a > b)
        a = a - b;
    else
        b = b - a;
    return a;
}

int main()
{
    int m,n;
    do
    {
        cout << "Nhap m,n: "; cin >> m >> n;   
        if(m <= 0 || n <= 0)
            cout << "So ban nhap khong hop le. Xin nhap lai.\n";
    } while (m <= 0 || n <= 0);
    int gcd = uocChung(m,n);
    m /= gcd; n/=gcd;    
    cout << "Phan so toi gian: " << m << "/" << n;
    return 0;
}
