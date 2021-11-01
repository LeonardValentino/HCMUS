#include <stdio.h>
#include <math.h>

void hoan_vi(float &a, float &b);
int main()
{
    float a,b;
    printf("Nhap so thuc a: ");
    scanf("%f", &a);
    printf("Nhap so thuc b: ");
    scanf("%f", &b);
    printf("Hai so thuc ban dau la: a = %f  b = %f", a , b);
    hoan_vi(a,b);
    printf("\nHai so thuc sau khi hoan vi: a = %f  b = %f", a, b);
    return 0;
}

void hoan_vi(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}
