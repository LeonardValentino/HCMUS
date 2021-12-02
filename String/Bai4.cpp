#include <stdio.h>
#include <string>
#include <string.h>

void xuatChuoi(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
        if(str[i] == ' ')
            printf("\n");
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
    
    printf("Xuat chuoi tren tung dong: \n");
    xuatChuoi(str);
}
