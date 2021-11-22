#include <stdio.h>
#include <math.h>

// nho them dau
void decToBinary(int n)
{
    int soNhiPhan[1000];
    int i = 0;
    while(n > 0)
    {
        soNhiPhan[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int h = i - 1; h >= 0; h--)
        printf("%d",soNhiPhan[h]);
}

int main()
{
    int n;
    do
    {
        printf("Nhap so nguyen n: ");
        scanf_s("%d",&n);
        if(n < -255 || n > 255)
            printf("So luong phan tu ban nhap khong hop le. Xin nhap lai.\n");
    } while (n < -255 && n > 255);
    decToBinary(n);
    return 0;
    
}
