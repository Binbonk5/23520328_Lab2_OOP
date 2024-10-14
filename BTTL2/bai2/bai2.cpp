#include "bai2.h"
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

    void Diem::TinhTien(double dx, double dy) {
        this -> Hoanh += dx;
        this -> Tung += dy;
    }

    void Diem::Quay(double radian) {
        double x_old = Hoanh;
        double y_old = Tung;

        this -> Hoanh = x_old * cos(radian) - y_old * sin(radian);
        this -> Tung = x_old * sin(radian) + y_old * cos(radian);
    }

    void TamGiac::Nhap() {
        double x, y;
        cout << "Nhap toa do diem A: ";
        cin >> x >> y;
        A = Diem(x, y);

        cout << "Nhap toa do diem B: ";
        cin >> x >> y;
        B = Diem(x, y);

        cout << "Nhap toa do diem C: ";
        cin >> x >> y;
        C = Diem(x, y);
    }

    void TamGiac::Xuat() {
        cout << "Toa do tam giac: " << endl;
        cout << "A: "; A.Xuat();
        cout << "B: "; B.Xuat();
        cout << "C: "; C.Xuat();
    }

    void TamGiac::TinhTien(double dx, double dy) {
        A.TinhTien(dx, dy);
        B.TinhTien(dx, dy);
        C.TinhTien(dx, dy);
    }

    void TamGiac::PhongTo(double scale) {
        A.SetHoanhDo(A.GetHoanhDo() * scale);
        A.SetTungDo(A.GetTungDo() * scale);

        B.SetHoanhDo(B.GetHoanhDo() * scale);
        B.SetTungDo(B.GetTungDo() * scale);

        C.SetHoanhDo(C.GetHoanhDo() * scale);
        C.SetTungDo(C.GetTungDo() * scale);
    }

    void TamGiac::ThuNho(double scale) {
        PhongTo(1.0 / scale);
    }

    void TamGiac::Quay(double rad) {
        A.Quay(rad);
        B.Quay(rad);
        C.Quay(rad);
    }
