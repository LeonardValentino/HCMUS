#include <iostream>
#include <cmath>

using namespace std;

void bai1()
{
    float so_thu_1,so_thu_2,so_thu_3,so_thu_4;
    cout << "Nhap so thu 1: "; cin >> so_thu_1;
    cout << "Nhap so thu 2: "; cin >> so_thu_2;
    cout << "Nhap so thu 3: "; cin >> so_thu_3;
    cout << "Nhap so thu 4: "; cin >> so_thu_4;
    float so_lon_nhat = so_thu_1;
    so_lon_nhat = so_lon_nhat > so_thu_2 ? so_lon_nhat : so_thu_2;
    so_lon_nhat = so_lon_nhat > so_thu_3 ? so_lon_nhat : so_thu_3;
    so_lon_nhat = so_lon_nhat > so_thu_4 ? so_lon_nhat : so_thu_4;

    cout << "So lon nhat trong 4 so thuc la: " << so_lon_nhat;
}

void bai2()
{
    unsigned long so_dien_cu, so_dien_moi, tien_dien;
    do
    {
        cout << "Nhap so dien cu (Kwh):  "; cin >> so_dien_cu; 
        cout << "Nhap so dien moi (Kwh): "; cin >> so_dien_moi;
        if(so_dien_cu > so_dien_moi)
            cout << "So dien cu khong duoc lon hon so dien moi. Moi nhap lai.\n ";
    } while (so_dien_cu > so_dien_moi);
    unsigned long sodientieuthu = so_dien_moi - so_dien_cu;
    if(sodientieuthu <= 50)
    {
        tien_dien = sodientieuthu * 1243;
    }
    else if(sodientieuthu > 50 && sodientieuthu <= 100)
    {
        tien_dien = 50 * 1243 + (sodientieuthu - 50) * 1304;
    }
    else if(sodientieuthu > 100 && sodientieuthu <= 150)
    {
        tien_dien = 50 * 1243 + 50 * 1304 + (sodientieuthu - 100) * 1644;
    }
    else if(sodientieuthu > 150 && sodientieuthu <= 200)
    {
        tien_dien = 50 * 1243 + 50 * 1304 + 50 * 1644 + (sodientieuthu - 150) * 1806;
    }
    else if(sodientieuthu > 200 && sodientieuthu <= 250)
    {
        tien_dien =  50 * 1243 + 50 * 1304 + 50 * 1644 +  50 * 1806 + (sodientieuthu - 200) * 1976;
    }
    else
    {
         tien_dien =  50 * 1243 + 50 * 1304 + 50 * 1644 +  50 * 1806 + 50 * 1976 + (sodientieuthu - 250) * 2297;
    }
    cout << "Tien dien phai tra trong thang la: " << tien_dien << " dong.";
}

void bai3()
{
     float r1, r2, d;    // d la khoang cach
    cout << "Nhap gia tri ban kinh thu 1:   "; cin >> r1;
    cout << "Nhap gia tri ban kinh thu 2:   "; cin >> r2;
    cout << "Nhap khoang cach giua hai tam: "; cin >> d;
    float hieu_hai_ban_kinh;
    if(r1 < r2)
        hieu_hai_ban_kinh = r2 - r1;
    else    
        hieu_hai_ban_kinh = r1 - r2;
    float tong_hai_ban_kinh = r1 + r2;
    if(d == 0 && r1 == r2)
    {
        cout << "Hai duong tron chong khop.";
    }
    else if(d > tong_hai_ban_kinh)
    {
        cout << "Hai duong tron tach roi.";
    }
    else if(d == hieu_hai_ban_kinh)
    {
        cout << "Hai duong tron tiep xuc trong.";
    }
    else if(d == tong_hai_ban_kinh)
    {
        cout << "Hai duong tron tiep xuc ngoai.";
    }
    else if(d < tong_hai_ban_kinh && d > hieu_hai_ban_kinh)
    {
        cout << "Hai duong tron giao nhau.";
    } 
    else    
        cout << "Hai duong tron bao nhau.";
}

void bai4()
{
    int so_ngaythue;
    string loaiphong;
    cout << "Nhap so ngay thue: "; cin >> so_ngaythue;
    cout << "Nhap loai phong thue(co 3 loai phong la A,B,C): "; cin >> loaiphong;
    int ma_loaiphong;
    unsigned long tien_thue;
    if(loaiphong == "A")    ma_loaiphong = 1;
    else if(loaiphong == "B")   ma_loaiphong = 2;
    else ma_loaiphong = 3;
    switch(ma_loaiphong)
    {
        case 1: 
        {
            if(so_ngaythue <= 10)
                tien_thue = so_ngaythue * 450000;
            else
                tien_thue = (so_ngaythue * 450000) - (so_ngaythue * 450000)*(10/100);
        }
        case 2:
        {
            if(so_ngaythue <= 10)
                tien_thue = so_ngaythue * 350000;
            else
                tien_thue = (so_ngaythue * 350000) - (so_ngaythue * 350000)*8/100;
        }
        case 3:
        {
            if(so_ngaythue <= 10)
                tien_thue = so_ngaythue * 250000;
            else
                tien_thue = (so_ngaythue * 250000) - (so_ngaythue * 250000)*8/100;
        }
    }
    cout << "So tien thue phong khach phai tra la: " << tien_thue << " dong.";
}

void bai5()
{
    int n;
    do
    {
        cout << "Nhap n: "; cin >> n;
        if(n <= 0)  
            cout << "Phai nhap n la so nguyen duong.\n";
    } while (n <= 0);
    int i = 0;
    while(i * i <= n)
    {
        if(i*i == n)
        {
            cout << n << " la so chinh phuong.";
             // return 0;
        }
        ++i;
    }
    cout << n << " khong phai la so chinh phuong.";

}

void bai6()
{
    int n;
    do
    {
        cout << "Nhap n: "; cin >> n;
        if(n <= 0)  
            cout << "Phai nhap n la so nguyen duong.\n";
    } while (n <= 0);
    int dem_le = 0;
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 != 0)
            dem_le++;
    }
    cout << "So luong chu so le trong khoan tu 0 den " << n << " la: " << dem_le;
}

void bai7()
{
    int n;
    do
    {
        cout << "Nhap n: "; cin >> n;
        if(n <= 0)
            cout << "n la so nguyen duong. Xin nhap lai.\n";
    } while (n <= 0);
    int dem = 0;
    cout << "Cac so co tong cac chu so bang 10 va nho hon " << n << " la: ";
    for(int i = 1; i <= n; i++)
    {
        int tong_cac_chu_so = 0;
        int temp = i;
        while(temp != 0)
        {
            tong_cac_chu_so += temp % 10;
            temp /= 10;
        }
        if(tong_cac_chu_so == 10)
            cout << i << "  ";
    }
}

int bai8()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    float trung_binh;
    int tong_cac_so = 0;
    if(n < 0)
    {
        for(int i = n; i <= 1; i++)
        {
            tong_cac_so += i;
        }
        trung_binh = (float)tong_cac_so/(-n);
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            tong_cac_so += i;
        }
        trung_binh = (float)tong_cac_so/n;
    }
    cout << tong_cac_so << endl;
    cout << (float)trung_binh;
    return 2;   // 2 loi
}

int bai9()
{
    int tong_cac_so_da_nhap = 0;
    int gia_tri;
    do
    {
        cout << "Nhap gia tri: "; cin >> gia_tri;
        tong_cac_so_da_nhap += gia_tri;
    } while (gia_tri != 0);
    cout << "Tong cac so da nhap tu ban phim: " << tong_cac_so_da_nhap;
    return 0;
}

int bai10()
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong n: "; cin >> n;
        if(n <= 0)
            cout << "n phai la so nguyen duong, xin nhap lai.\n";
    } while (n <= 0);
    float ket_qua_bai_1;
    for(int i = 1; i < n; i++)
    {
        float temp = (float)i / (i + 1);
        ket_qua_bai_1 += temp;
    }
    cout << "Ket qua bai thu 1 la: " << ket_qua_bai_1;

    float ket_qua_bai_2;
    for(int i = 1; i <= n; i++)
    {
        float temp = i * (i + 1);
        ket_qua_bai_2 += temp;
    }
    cout << "\nKet qua bai 2 la: " << ket_qua_bai_2;

    float ket_qua_bai_3;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        if(i % 2 != 0)
        {
            temp = pow(1,i);
        }
        else
        {
            temp = pow(2,i);
        }
        ket_qua_bai_3 += temp;
    }
    cout << "\nKet qua bai 3 la: " << ket_qua_bai_3;
    return 0;
}
