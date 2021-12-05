#include <stdio.h>
#include <string.h>

int demSoLuongTu(char str[])
{
    int dem = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
            dem++;
    }
    return dem + 1;
}

int demSoLuongKiTu(char str[], int index)
{
    int sum = 0;
    for(int i = index; str[i] != ' '; i++)
    {
        sum++;
    }
    return sum;
}

void chonTuDemKiTu(char str[])
{
    int word;
    int dem = 0, soKiTu = 0, index;
    do
    {
        printf("Vi tri tu ban muon kiem tra: ");
        scanf("%d", &word);
        if(word < 0 || word > demSoLuongTu(str))
            printf("Vi tri tu ban nhap khong hop le. Xin nhap lai.\n");
    } while (word < 0 || word > demSoLuongTu(str));
    if(word == 1)
    {
        soKiTu = demSoLuongKiTu(str,0);
    }
    else
    {
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] == ' ' && str[i + 1] != ' ')
            {
                dem++;
                index = i + 1;
            }
            if(dem == word - 1)
                soKiTu = demSoLuongKiTu(str,index);
        }
    }
    printf("So ki tu cua tu thu %d la: %d", word, soKiTu);
}

int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    fflush(stdin);
    gets(str);
    chonTuDemKiTu(str);
    return 0;
}
/*
@author Leonard
*/
