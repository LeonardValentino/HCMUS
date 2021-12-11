#include <iostream>
#include <string.h>
using namespace std;

void playGame(char p1, char p2)
{
    if((p1 == 'S' || p1 == 's') && (p2 == 'p' || p2 == 'P'))
        cout << "Nguoi choi 1 chien thang.";
    else if((p1 == 'P' || p1 == 'p') && (p2 == 'r' || p2 == 'R'))
        cout << "Nguoi choi 1 chien thang.";
    else if((p1 == 'r' || p1 == 'R') && (p2 == 'S' || p2 == 's'))
        cout << "Nguoi choi 1 chien thang.";
    else if(p1 == p2 || p1 == (p2 - 32) || (p1 - 32) == p2)
        cout << "Hai nguoi choi hoa nhau.";
    else 
        cout << "Nguoi choi 2 chien thang.";
}       

int main()
{
    char p1,p2;
    cout << "Lua chon cua nguoi choi 1: ";
    cin >> p1;
    cout << "Lua chon cua nguoi choi 2: ";
    cin >> p2;
    playGame(p1,p2);
    return 0;
}
