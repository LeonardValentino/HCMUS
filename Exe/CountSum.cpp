#include <iostream>
#include <iomanip>
using namespace std;

float calculateSum(int k)
{
    float res = 1;
    int temp = 1;
    for(int i = 2; i <= k * 2; i++)
    {
        temp *= i;
        if(i % 2 == 0)
            res += (1.0/temp);
    }
    return res;
}

int main()
{
    int k;
    do
    {
        cout << "Nhap k: "; cin >> k;
        if(k < 0)
            cout << "So ban nhap khong hop le. Xin nhap lai.\n";
    } while (k < 0);
    
    cout << "Tong la: " << setprecision(9) << calculateSum(k);
    return 0; 
}
