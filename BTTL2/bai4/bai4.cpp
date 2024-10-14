#include "bai4.h"
using namespace std;

    void ThiSinh::Nhap() {
        cin.ignore();
        cout << "Nhap ten: ";
        getline(cin, Ten);
        cout << "Nhap MSSV: ";
        cin >> MSSV;
        cout << "Nhap ngay thang nam sinh: ";
        cin >> iNgay >> iThang >> iNam;
        cout << "Nhap diem toan: ";
        cin >> fToan;
        cout << "Nhap diem van: ";
        cin >> fVan;
        cout << "Nhap diem anh: ";
        cin >> fAnh;
    }

    void ThiSinh::Xuat() {
        cout << "Ten: " << Ten << endl;
        cout << "MSSV: " << MSSV << endl;
        cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
        cout << "Diem Toan: " << fToan << endl;
        cout << "Diem van: " << fVan << endl;
        cout << "Diem Anh: " << fAnh << endl;
        cout << "Diem Tong: " << Tong() << endl;
    }

    float ThiSinh::Tong() {
        return fToan + fVan + fAnh;
    }
