#include <stdio.h>
#include <string>
#include <string.h>

void bienDoiChuoi(char str[])
{
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    for(int i = 1; i < strlen(str) - 1; i++)
    {
        if(str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] -= 32;
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
    bienDoiChuoi(str);
    printf("Chuoi sau khi viet hoa cac chu cai dau moi tu: ");
    xuatChuoi(str);

}
