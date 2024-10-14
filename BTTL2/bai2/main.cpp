#include "bai2.h"
using namespace std;

int main() {
    TamGiac tg;
    double x, y;
    tg.Nhap();
    tg.Xuat();

    cout << "Nhap lan luot dx va dy de tinh tien: ";
    cin >> x >> y;
    tg.TinhTien(x, y);
    cout << "\nTam giac sau khi tinh tien: " << endl;
    tg.Xuat();

    cout << "Nhap scale phong to tam giac: ";
    cin >> x;
    tg.PhongTo(x);
    cout << "\nTam giac sau khi phong to: " << endl;
    tg.Xuat();

    cout << "Nhap scale thu nho tam giac: ";
    cin >> x;
    tg.ThuNho(x);
    cout << "\nTam giac sau khi thu nho: " << endl;
    tg.Xuat();

    cout << "Nhap goc de quay tam giac: ";
    cin >> x;
    tg.Quay(x);
    cout << "\nTam giac sau khi quay: " << endl;
    tg.Xuat();

    return 0;
}
