#include <stdio.h>
#include <math.h>
#include "doixung.h"

int main()
{
    unsigned int n; // kiem tra truong hop am
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    int songuyento = kiemtra_doixung(n);
    if(songuyento == 1)
        printf("%d la so doi xung.",n);
    else
        printf("%d khong la so doi xung.",n);
    return 1;
}
