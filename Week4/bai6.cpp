#include <stdio.h>
#include <math.h>

int dem_so_le(int n);
int main()
{
    int n;
    do
    {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
        if(n < 1)
            printf("n phai la so nguyen duong, xin nhap lai.\n");
    } while (n < 1);
    int dem_le = dem_so_le(n);
    printf("So chu so le tu 1 den %d la: %d", n, dem_le);
    return 0;
}

int dem_so_le(int n)
{
    int dem = 0;
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 != 0)
            dem++;
    }
    return dem;
}
