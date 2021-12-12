#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, i;
    cout<<"Nhap n: ";
    cin >> n;

    for (i = 2; i <= n; i++) 
    {
        while (n % i == 0) 
        {
            cout << i << " ";
            n /= i;
        }
    }
    return 0;
}

/**
*@author: Sam
*/
