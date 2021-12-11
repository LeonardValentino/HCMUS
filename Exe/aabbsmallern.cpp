#include <iostream>
#include <math.h>
using namespace std;

void showNumber(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(((i * i + j * j) < n) && (i <= j))
                cout << "(" << i << ";" << j << ")  "; 
        }
    }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap vao n: ";
        cin >> n;
        if(n <= 0)
            cout << "n phai la so duong. Xin nhap lai.\n";
    } while (n <= 0);
    showNumber(n);
}
