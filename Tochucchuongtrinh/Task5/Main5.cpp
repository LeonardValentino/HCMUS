#include <stdio.h>
#include <math.h>
#include "sohoanhao.h"

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    int so_hoan_hao = kiemtra_hoanhao(n);
    if(so_hoan_hao == 1)
        printf("%d la so hoan chinh.", n);
    else 
        printf("%d khong la so hoan chinh.", n);
    return 0;
}
