#include <iostream>
#include <iomanip>
using namespace std;

void setMatrix(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            cin >> a[i][j];
        }
    }
}

void showMatrix(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            cout << setw(4) <<a[i][j] << " ";
        }
        cout << endl;
    }
}

void hoanvi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sord1DArray(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                hoanvi(a[i], a[j]);
        }
    }
}

void pushMatrix(int a[][100], int b[], int n, int dong, int cot)
{
    int dem = 0;
    int i,j = 0;
    while(dem < n)
    {
        i = 0;
        if(j % 2 == 0)
        {
            while(i < dong)
                a[i++][j] = b[dem++];
        }
        else
        {
            i = dong - 1;
            while(i >= 0)
                a[i--][j] = b[dem++];
        }
        j++;
    }
}

void sort(int a[][100], int dong, int cot)
{
    int b[100], dem = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            b[dem++] = a[i][j];
        }
    }
    sord1DArray(b,dem);
    pushMatrix(a,b,dem,dong,cot);
}

int main()
{
    int a[100][100], dong = 4, cot = 4;
    setMatrix(a,dong,cot);
    showMatrix(a,dong,cot);
    sort(a,dong,cot);
    cout << "Ma tran sau khi sap xep zigzac: \n";
    showMatrix(a,dong,cot);
}
