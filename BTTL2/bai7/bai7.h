#include<bits/stdc++.h>
using namespace std;

class Diem {
public:
    double x, y;
    Diem(double x = 0, double y = 0) : x(x), y(y) {}
};

class DaGiac {
private:
    vector<Diem> vDiem;

public:
    DaGiac(int n) {
        for (int i = 0; i < n; i++) {
            Diem d;
            vDiem.push_back(d);
        }
    }

    void Nhap();

//tinh dien tich cua da giac
    double DienTich();
};
