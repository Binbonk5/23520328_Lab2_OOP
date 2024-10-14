#include "bai1.h"

Diem::Diem() : iHoanh(0), iTung(0) {}

Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

void Diem::Xuat() const {
    cout << "Diem(" << iHoanh << ", " << iTung << ")" << endl;
}

int Diem::GetTungDo() const {
    return iTung;
}

int Diem::GetHoanhDo() const {
    return iHoanh;
}

void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

void Diem::TinhTien(int dX, int dY) {
    iHoanh += dX;
    iTung += dY;
}

void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
}
