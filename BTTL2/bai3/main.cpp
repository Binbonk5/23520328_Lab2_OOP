#include "bai3.h"
using namespace std;

int main() {
    DaGiac dg;
    double x, y;
    dg.Nhap();
    dg.Xuat();

    cout << "Nhap lan luot dx va dy de tinh tien: ";
    cin >> x >> y;
    dg.TinhTien(x, y);
    cout << "\nDa giac sau khi tinh tien: " << endl;
    dg.Xuat();

    cout << "Nhap scale phong to da giac: ";
    cin >> x;
    dg.PhongTo(x);
    cout << "\nDa giac sau khi phong to: " << endl;
    dg.Xuat();

    cout << "Nhap scale thu nho da giac: ";
    cin >> x;
    dg.ThuNho(x);
    cout << "\nDa giac sau khi thu nho: " << endl;
    dg.Xuat();

    cout << "Nhap goc de quay da giac: ";
    cin >> x;
    dg.Quay(x);
    cout << "\nDa giac sau khi quay: " << endl;
    dg.Xuat();

    return 0;
}
