#include <iostream>
#include <math.h>
using namespace std;
struct DATHUC{
    int soMu;
    int heSo[100] = {0};
};
typedef struct DATHUC dt;


void nhapDaThuc(dt &a)
{
    cout << "Nhap bac cua da thuc: ";
    cin >> a.soMu;
    for(int i = 0; i <= a.soMu; i++)
    {
        cout << "Nhap he so bac " << i << ": ";
        cin >> a.heSo[i];
    }
}

void xuatDaThuc(dt a)
{
    cout << "Da thuc: ";
    for(int i = a.soMu; i > 0; i--)
    {
        if(a.heSo[i] != 0)
            cout << a.heSo[i] << "x^" << i << " + "; 
    }
    cout << a.heSo[0];
}

void nhapDayDaThuc(dt a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "\nNhap da thuc thu " << i + 1 << endl;
        nhapDaThuc(a[i]);
    }
}

int tongDaThuc(dt a, int x)
{
    int sum;
    for(int i = a.soMu; i > 0; i--)
    {
        sum += a.heSo[i] * pow(x,i);
    }
    return sum + a.heSo[0];
} 

int viTriGiaTriDaThuc(dt a[], int n , int x0)
{
    int vt = 0;
    int max = tongDaThuc(a[0],x0);
    for(int i = 1; i < n; i++)
    {
        if(tongDaThuc(a[i],x0) > max)
        {
            max = tongDaThuc(a[i],x0);
            vt = i;
        }
    }
    return vt;
}

int main()
{
    dt a[100];
    int n;
    cout << "Nhap so luong da thuc ban can nhap: ";
    cin >> n;
    nhapDayDaThuc(a,n);

    for(int i = 0; i < n; i++)
    {
        cout << "\nDa thuc thu " << i + 1 << endl;
        xuatDaThuc(a[i]);
    }
    int x0;
    cout << "\nNhap gia tri x0: ";
    cin >> x0;

    int index = viTriGiaTriDaThuc(a,n,x0);
    cout << "Da thuc co gia tri lon nhat voi x0 = " << x0 << ": ";
    xuatDaThuc(a[index]);
    return 0;
}
