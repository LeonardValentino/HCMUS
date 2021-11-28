#include <stdio.h>
#include <string>
#include <string.h>

void xuatChuoiDao(char str[])
{
    for(int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fflush(stdin);
    gets(str);
    printf("\nChuoi ban vua nhap la: ");
    puts(str);
    
    printf("Xuat chuoi dao: ");
    xuatChuoiDao(str);
}
