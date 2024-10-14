#include "bai3.h"
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


    void DaGiac::Nhap() {
        cout << "Nhap so dinh cua da giac: ";
        cin >> n;
        Dinh = new Diem[n];

        for (int i = 0; i < n; i++) {
            double x, y;
            cout << "Nhap toa do dinh thu " << i + 1 << ": ";
            cin >> x >> y;
            Dinh[i] = Diem(x, y);
        }
    }

    void DaGiac::Xuat() {
        cout << "Toa do cac dinh cua da giac: " << endl;
        for (int i = 0; i < n; i++) {
            cout << "Dinh " << i + 1 << ": ";
            Dinh[i].Xuat();
            cout << endl;
        }
    }

    void DaGiac::TinhTien(double dx, double dy) {
        for (int i = 0; i < n; i++) {
            Dinh[i].TinhTien(dx, dy);
        }
    }

    void DaGiac::PhongTo(double scale) {
        for (int i = 0; i < n; i++) {
            double X = Dinh[i].GetHoanhDo() * scale;
            double Y = Dinh[i].GetTungDo() * scale;
            Dinh[i].SetHoanhDo(X);
            Dinh[i].SetTungDo(Y);
        }
    }

    void DaGiac::ThuNho(double scale) {
        PhongTo(1.0 / scale);
    }

    void DaGiac::Quay(double radian) {
        for (int i = 0; i < n; i++) {
            Dinh[i].Quay(radian);
        }
    }
