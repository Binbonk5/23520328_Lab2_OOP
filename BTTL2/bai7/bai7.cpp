#include "bai7.h"
using namespace std;

    void DaGiac::Nhap() {
        for (int i = 0; i < vDiem.size(); ++i) {
            cin >> vDiem[i].x >> vDiem[i].y;
        }
    }

    double DaGiac::DienTich() {
        double dt = 0.0;
        int n = vDiem.size();

        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n;
            dt += vDiem[i].x * vDiem[j].y - vDiem[j].x * vDiem[i].y;
        }

        return abs(dt) / 2.0;
    }
