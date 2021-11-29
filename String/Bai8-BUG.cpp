#include <stdio.h>
#include <string.h>

void xoaKiTu(char str[], int index)
{
    for(int i = index; i < strlen(str); i++)
    {
        str[i] = str[i + 1];
    }
}

void xuatViTriCacKiTu(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'z'))
        {
            char answer;
            printf("Ban co muon xoa phan tu o vi tri %d. Nhap y neu ban muon xoa: ", i);
            fflush(stdin);
            scanf("%c",&answer);
            if(answer == 'y')
            {   
                xoaKiTu(str, i);
                i--;
            }
            else
            {
                i++;
            }
            printf("Chuoi sau khi ban lua chon: ");
            puts(str);
        }
    }
    
    printf("\nChuoi ket qua la: ");
    puts(str);
}

int main()
{
    char str[100];
    printf("Nhap vao chuoi: ");
    gets(str);
    xuatViTriCacKiTu(str);
    return 2;
}
