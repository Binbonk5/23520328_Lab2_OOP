#include <bits/stdc++.h>
using namespace std;

class Diem {
private:
    double Hoanh;
    double Tung;
public:

//constructor khong tham so
    Diem() {
        Hoanh = 0;
        Tung = 0;
    }

//constructor co tham so
    Diem(double Hoanh, double Tung) {
        this -> Hoanh = Hoanh;
        this -> Tung = Tung;
    }

//copy constructor
    Diem(const Diem &x) {
        Hoanh = x.Hoanh;
        Tung = x.Tung;
    }

    void Xuat();

    double GetTungDo();

    double GetHoanhDo();

    void SetTungDo(double Tung);

    void SetHoanhDo(double Hoanh);

//tinh tien diem di 1 doan delta x va 1 doan delta y
    void TinhTien(double dx, double dy);

//quay 1 diem quanh goc toa do
    void Quay(double rad);
};

class DaGiac {
private:
    int n;
    Diem *Dinh;

public:
    DaGiac() {
        n = 0;
        Dinh = nullptr;
    }

    void Nhap();

    void Xuat();

// tinh tien di theo mot vector (dx, dy)
    void TinhTien(double dx, double dy);

// phong to theo 1 scale
    void PhongTo(double scale);

// thu nho theo 1 scale
    void ThuNho(double scale);

// quay 1 goc rad quanh goc toa do
    void Quay(double radian);
};
