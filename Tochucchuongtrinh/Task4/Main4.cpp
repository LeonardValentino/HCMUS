#include <stdio.h>
#include <math.h>
#include "sotoanle.h"

int main()
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    int kiem_tra_toan_le = so_toan_chu_so_le(n);
    if(kiem_tra_toan_le == 1)
        printf("%d co cac chu so toan chu so le.", n);
    else 
        printf("%d co cac chu so khong toan la chu so le.", n);
    return 0;
}
