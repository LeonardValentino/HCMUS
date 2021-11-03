#include <stdio.h>
#include <math.h>
#include "nguyento.h"

int main()
{
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    int songuyento = kiemtra_nguyento(n);
    if(songuyento == 1)
        printf("%d la so nguyen to.",n);
    else
        printf("%d khong la so nguyen to.",n);
    return 0;
}
