#include <stdio.h>
#include <string.h>
void xuatNguoc(char a[], int n)
{
    if(n == strlen(a))
        return;
    else
    {
        xuatNguoc(a, n + 1);
        printf("%c", a[n]);
    }
}

int main()
{
    char a[100];
    fflush(stdin);
    gets(a);

    xuatNguoc(a,0);
}
