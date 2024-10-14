#include "bai5.h"
using namespace std;

int main() {
    int x, y, n, choice;
    Diem d;
    cin >> x >> y;
    d.SetHoanhDo(x);
    d.SetTungDo(y);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> choice;
        if (choice == 1) {
            d.nhandoi();
        }
        else if (choice == 2) {
            d.GanGoc();
        }
        else if (choice == 3) {
            int k, _d;
            cin >> k >> _d;
            d.TinhTien(k, _d);
        }
        else continue;
    }

    d.Xuat();
    return 0;
}
