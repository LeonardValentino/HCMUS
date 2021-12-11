#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n; int q = 0;
    printf("Chuong trinh nay se in ra tam giac can\n");
    printf("Nhap chieu cao tam giac cua ban: \n");
    scanf("%d",&n);
    while (n > 0)
    {
        for (int i = 1; i<n; i++)
            printf("%c", ' ');
        for (int k = 0; k <= q; k ++)
            printf("%c", '*');
        n -- ;
        q += 2 ;
        printf("\n");
    }
    return 0;
}
