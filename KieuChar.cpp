#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
#define SPARATOR "., "
int main1()
{
    char s[] = "Tony blurt";
    char s2[100], *s3;

    strcpy(s2,s);
    printf("%s\n",s2);
    strncpy(s2 + 2,"12345",3);  // copy 3 chu cai dau cua chuoi 12345 vao chu cai thu 2 cua chuoi s2
    printf("%s\n",s2);
    s3 = strdup(s + 5); // lay tu vi tri thu 5 den het chuoi
    cout << s3;
    return 0;
}

int main2()
{
    //tach chuoi va noi chuoi
    char *strcat(char *dest,const char *src);   // noi source vao dest
    char *strtok(char *s, const char *sep); //tach chuoi voi toi ki tu sep

    char s[] = "Thu strtok: 9,123.45";
    char *p;
    p = strtok(s,SPARATOR);
    while(p != NULL)
    {
        printf("%s\n",p);
        p = strtok(NULL,SPARATOR);
    }
    return 0;
}

int main3()
{
    char s[] = "Thu tim kiem chuoi";
    char *p;

    p = strchr(s,'m');
    printf("%s\n",p);

}

void StrIns(char *s, char *sub)
{
    int len = strlen(sub);
    memmove(s + len,s,strlen(s) + 1);   // di chuyen bo nho, phan tu mang
    strncpy(s,sub,len);
}

int main4()
{
    //chen ki thu
    char s[] = "Thu chen";
    StrIns(s,"123");
    printf("%s\n",s);
    StrIns(s + 8,"45");
    printf("%s\n",s);
    return 0;
    //123Thu chen   // di chuyen ca doan Thu chen len 3 ki tu
    //123Thu c45hen
}
// XOA CHUOI
void StrDel(char *s, int n)
{
    memmove(s, s + n, strlen(s + n) + 1);
}

int main()
{
    char s[] = "Thu xoa 12345";
    StrDel(s,4);
    printf("%s\n",s);
    StrDel(s + 4,3);
    printf("%s\n",s);
    return 0;
    //xoa 12345
    //xoa 45
   
}
