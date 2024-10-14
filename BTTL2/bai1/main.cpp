#include "bai1.h"

int main() {
    Diem d1, d2, d3;

    cout << "Nhap thong tin cho diem d1:" << endl;
    d1.Nhap();
    cout << "Nhap thong tin cho diem d2:" << endl;
    d2.Nhap();
    cout << "Nhap thong tin cho diem d3 (copy cua d2):" << endl;
    d3 = d2;

    cout << "Diem d1: ";
    d1.Xuat();
    cout << "Diem d2: ";
    d2.Xuat();
    cout << "Diem d3: ";
    d3.Xuat();

    int hoanh, tung;
    cout << "Nhap hoanh do moi cho d1: ";
    cin >> hoanh;
    cout << "Nhap tung do moi cho d1: ";
    cin >> tung;
    d1.SetHoanhDo(hoanh);
    d1.SetTungDo(tung);
    cout << "Diem d1 sau khi set: ";
    d1.Xuat();

    int dx, dy;
    cout << "Nhap gia tri tinh tien dx va dy cho d2: ";
    cin >> dx >> dy;
    d2.TinhTien(dx, dy);
    cout << "Diem d2 sau khi tinh tien: ";
    d2.Xuat();

    return 0;
}
