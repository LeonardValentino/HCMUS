#include <stdio.h>
#include <string.h>

void xuatViTriCacKiTu(char str[])
{
    printf("Vi tri cac ki tu khong phai ki so hoac ki tu la: ");
    for(int i = 0; i < strlen(str); i++)
    {
        if((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'z'))
        {
            continue;
        }
        else
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    char str[100];
    printf("Nhap vao chuoi: ");
    gets(str);
    xuatViTriCacKiTu(str);
    return 0;
}
