#include "bai5.h"
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

    void Diem::TinhTien(double k, double d) {
        if (k == 0) {
            this -> Hoanh += d;
        } else {
            this -> Tung += d;
        }
    }

    void Diem::nhandoi() {
        this -> Hoanh *= 2;
        this -> Tung *= 2;
    }

    void Diem::GanGoc() {
        this -> Hoanh = 0;
        this -> Tung = 0;
    }
