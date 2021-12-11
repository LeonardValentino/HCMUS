#include <iostream>
#include <string.h>
using namespace std;

bool checkTriangle(int c1, int c2, int c3)
{
    if(c1 > c2 + c3 || c2 > c1 + c3 || c3 > c1 + c2)
        return false;
    return true;
}

void kiemTrTamGiac(int c1,int c2, int c3)
{
    if(c1 == c2 && c2 == c3 && c3 == c1)
        cout << "Tam giac da nhap la tam giac deu";
    else if(c1 == c2 || c2 == c3 || c3 == c1)
    {
        if(c1*c1 == c2*c2 + c3*c3 || c2*c2 == c1*c1 + c3*c3 || c3*c3 == c1*c1 + c2*c2)
            cout << "Tam giac da nhap la tam giac vuong can.";
        else
            cout << "Tam giac da nhap la tam giac can.";
    }
    else if(c1*c1 == c2*c2 + c3*c3 || c2*c2 == c1*c1 + c3*c3 || c3*c3 == c1*c1 + c2*c2)
        cout << "Tam giac da nhap la tam giac vuong";
    else 
        cout << "Tam giac ban da nhap la tam giac thuong.";
}

int main()
{
    int c1,c2,c3;
    cout << "Nhap canh thu 1: "; cin >> c1;
    cout << "Nhap canh thu 2: "; cin >> c2;
    cout << "Nhap canh thu 3: "; cin >> c3;
    if(checkTriangle(c1,c2,c3) == false)
        cout << "Ba canh ban da nhap khong tao thanh 1 tam giac.";
    else
    {
        cout << "Ba canh ban da nhap tao thanh 1 tam giac." << endl;
        kiemTrTamGiac(c1,c2,c3);
    }
}
