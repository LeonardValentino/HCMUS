#include <stdio.h>
#include <math.h>
#include "doixung.h"

int main()
{
    unsigned int n; // kiem tra truong hop am
    printf("Nhap so nguyen duong: ");
    scanf("%u", &n);
    int songuyento = kiemtra_doixung(n);
    if(songuyento == 1)
        printf("%u la so doi xung.",n);
    else
        printf("%u khong la so doi xung.",n);
    return 1;
}
