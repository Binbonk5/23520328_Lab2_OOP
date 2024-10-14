#include "bai7.h"
using namespace std;

int main() {
    int n;
    cin >> n;

    DaGiac dg(n);
    dg.Nhap();
    cout << dg.DienTich() << endl;
    return 0;
}
