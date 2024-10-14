#include "bai6.h"
using namespace std;


    void Diem::Xuat() {
        cout << "(" << Hoanh << ", " << Tung << ")" << endl;
    }

    double Diem::GetTungDo() {
        return Tung;
    }

    double Diem::GetHoanhDo() {
        return Hoanh;
    }

    void Diem::SetTungDo(double Tung) {
        this -> Tung = Tung;
    }

    void Diem::SetHoanhDo(double Hoanh) {
        this -> Hoanh = Hoanh;
    }

    void Diem::TinhTien(double _do, double d) {
        double rad = (_do/180)*M_PI;
        this -> Hoanh += d * cos(rad);
        this -> Tung += d * sin(rad);
    }

    void TamGiac::Nhap() {
        double x, y;
        cin >> x >> y;
        A = Diem(x, y);

        cin >> x >> y;
        B = Diem(x, y);

        cin >> x >> y;
        C = Diem(x, y);
    }

    void TamGiac::Xuat() {
        A.Xuat();
        B.Xuat();
        C.Xuat();
    }

    void TamGiac::TinhTien(double _do, double d) {
        A.TinhTien(_do, d);
        B.TinhTien(_do, d);
        C.TinhTien(_do, d);
    }
