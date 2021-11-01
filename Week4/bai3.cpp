#include <stdio.h>
#include <math.h>


int tong_chan_1_den_n(int n);
int main()
{
    int n;
    do
    {
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
        if(n < 1)
            printf("n la so nguyen duong, nhap lai n.\n");
    } while (n < 1);
    
    int tong_chan = tong_chan_1_den_n(na;
    printf("Tong cac so chan tu 1 den %d la: %d", n , tong_chan);
}

int tong_chan_1_den_n(int n)
{
    int tong = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            tong += i;
    }
    return tong;
}
