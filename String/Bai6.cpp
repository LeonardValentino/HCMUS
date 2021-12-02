#include <stdio.h>
#include <string.h>

void xuatViTriXuatHienChuoiCon(char motherString[], char kidString[])
{
    int check = 0;
    for(int i = 0; i < strlen(motherString);i++)
    {
        int dem = 0;
        int temp = i;
        for(int j = 0; j < strlen(kidString); j++)
        {
            if(motherString[temp] == kidString[j])
            {
                dem++;
                temp++;
            }
            else
            {
                break;
            }
        }
        if(dem == strlen(kidString))
        {
            printf("\nVi tri bat dau cua chuoi con: %d", i);
            check++;
        }
    }
    if(check == 0)
        printf("Khong tim thay chuoi con.\n");
}

int main()
{
    char motherString[100];
    char kidString[100];
    printf("Nhap vao mot chuoi: ");
    fflush(stdin);
    gets(motherString);
    printf("Chuoi ban da nhap la: ");
    puts(motherString);
    printf("Nhap chuoi con: ");
    fflush(stdin);
    gets(kidString);
    xuatViTriXuatHienChuoiCon(motherString, kidString);
    return 0;
}
