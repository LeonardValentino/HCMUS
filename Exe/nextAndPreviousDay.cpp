#include <iostream>
#include <math.h>
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
        if(year < 1)
            cout << "Nam khong hop le. Xin nhap lai.\n";
    }while(year < 1);

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

void showPreviousDay(int day, int month, int year)
{
    int dayPrev, monthPre, yearPre;
    if(day == 1 && month == 1)
    {
        dayPrev = 31;
        monthPre = 12;
        yearPre = --year;
    }
    else if(day == 1 && month != 1)
    {
        dayPrev = daysInMonth(month - 1, year);
        monthPre = month - 1;
        yearPre = year;
    }
    else
    {
        dayPrev = --day;
        monthPre = month;
        yearPre = year;
    }

    cout << dayPrev << "/" << monthPre << "/" << yearPre; 
}

void showNextDay(int day, int month, int year)
{
    int dayNext, monthNext, yearNext;
    if(day == daysInMonth(month,year) && month == 12)
    {
        dayNext = 1;
        monthNext = 1;
        yearNext = ++year;
    }
    else if(day == daysInMonth(month, year) && month != 12)
    {
        dayNext = 1;
        monthNext = ++month;
        yearNext = year;
    }
    else
    {
        dayNext = ++day;
        monthNext = month;
        yearNext = year;
    }
    cout << dayNext << "/" << monthNext << "/" << yearNext;
}

int main()
{
    int day, month, year;
    inPut(day,month,year);
    showPreviousDay(day,month,year);
    cout << endl;
    showNextDay(day,month,year);
    return 0;
}
