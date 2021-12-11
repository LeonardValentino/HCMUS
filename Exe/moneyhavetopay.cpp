#include <iostream>
using namespace std;
long tinhTien(int messages)
{
    long sum;
    if(messages <= 100)
        sum = 50000;
    else if(messages > 100 && messages <= 200)
        sum = 50000 + (messages - 100) * 400;
    else
        sum = 50000 + 100 * 400 + (messages - 200) * 300;
    return sum;
}

int main()
{
    int messages;
    cout << "Nhap so tin nhan da nhan: "; cin >> messages;

    cout << "Tong so tien phai tra: " << tinhTien(messages);
}
