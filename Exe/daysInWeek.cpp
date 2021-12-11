#include <iostream>
using namespace std;
bool namNhuan(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year)
{
    int days;
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
        {
            if(namNhuan(year) == true)
                days = 29;
            else
                days = 28;
            break;
        }
    }
    return days;
}

void inPut(int &day, int &month, int &year)
{
    do
    {
        cout << "Nhap nam: "; cin >> year;
        if(year < 1975)
            cout << "Nam khong hop le. Xin nhap lai.\n";
    }while(year < 1975);

    do
    {
        cout << "Nhap thang: "; cin >> month;
        if(month < 1 || month > 12)
            cout << "Khong ton tai thang ban da nhap. Xin nhap lai.\n";
    }while(month < 1 || month > 12);

    do
    {
        cout << "Nhap ngay: "; cin >> day;
        if(day < 1 || day > daysInMonth(month, year))
            cout << "Ngay ban nhap khong hop le.Xin nhap lai.\n";
    }while(day < 1 || day > daysInMonth(month, year));
}

void showDaysInWeek(int day, int month, int year)
{
    int n;
    n = (day + 2 * month + (3 * (month + 1)) / 5 + year + (year / 4)) % 7;
    switch(n)
    {
        case 0: 
            cout << "Day la chu nhat.";
            break;
        case 1: 
            cout << "Day la thu 2.";
            break;
        case 2:
            cout << "Day la thu 3.";
            break;
        case 3: 
            cout << "Day la thu 4.";
            break;
        case 4: 
            cout << "Day la thu 5.";
            break;
        case 5:
            cout << "Day la thu 6.";
            break;
        case 6: 
            cout << "Day la thu 7.";
            break;
    }
}

int main()
{
    int day, year, month;
    inPut(day,month,year);
    showDaysInWeek(day,month,year);
    return 0;
}
