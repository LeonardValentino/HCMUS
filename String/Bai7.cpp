#include <stdio.h>
#include <string>
#include <string.h>

void xoaKyTu(char str[], int index)
{
    for(int i = index;i  < strlen(str); i++)
    {
        str[i] = str[i + 1];
    }
}

void xoaKhoangTrang(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
        {
            xoaKyTu(str,i + 1);
            i--;
        }
    }
}

void xuatChuoi(char str[])
{
    for(int i = 0; i < strlen(str); i++)
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
    
    xoaKhoangTrang(str);
    printf("Chuoi sau khi xoa cac ki tu khoang trang: ");
    xuatChuoi(str);
    return 0;
}
