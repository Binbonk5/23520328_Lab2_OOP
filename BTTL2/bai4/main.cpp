#include "bai4.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;

    vector<ThiSinh> ts;

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << ":" << endl;
        ThiSinh tsi;
        tsi.Nhap();
        ts.push_back(tsi);
    }

    cout << "Thi sinh co diem lon hon 15" << endl;
    for (ThiSinh t: ts) {
        if (t.Tong() > 15) {
            t.Xuat();
            cout << endl;
        }
    }

    cout << "Thi sinh co tong diem cao nhat:" << endl;
    int max = 0;
    ThiSinh ts_max;
    for (ThiSinh t: ts) {
        if (t.Tong() > max) {
            max = t.Tong();
            ts_max = t;
        }
    }

    ts_max.Xuat();

    return 0;
}
