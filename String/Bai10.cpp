#include <stdio.h>
#include <string.h>

void xoaKiTu(char str[], int index)
{
    for(int i = index; i < strlen(str); i++)
    {
        str[i] = str[i + 1];
    }
}

void xoaKyTuDacBiet(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {

        }
        else
        {
            char answer;
            printf("\nPhat hien ki tu dac biet o vi tri %d, neu ban muon xoa hay nhan 'y': ",i);
            fflush(stdin);
            scanf("%c", &answer);
            if(answer == 'y')
            {
                xoaKiTu(str,i);
                i--;
            }
            printf("Chuoi sau khi ban nhap lua chon: ");
            puts(str);
        }
    }
    printf("Chuoi cuoi cung la: ");
    puts(str);
}

int main()
{
    char str[100];
    gets(str);
    xoaKyTuDacBiet(str);
    return 0;
}
