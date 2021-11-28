#include <stdio.h>
#include <string>

int main()
{
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fflush(stdin);
    gets(str);
    printf("\nChuoi ban vua nhap la: ");
    puts(str);
    return 0;
}
