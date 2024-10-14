#include <iostream>
#include <vector>
using namespace std;

class PhanSo {
public:
    int TuSo;
    int MauSo;

    PhanSo(int tu, int mau) {
        TuSo = tu;
        while (mau == 0) {
            cout << "Mau so khong duoc bang 0. Nhap lai: ";
            cin >> mau;
        }
        MauSo = mau;
    }

    double GiaTri() const {
        return (double)(TuSo) / MauSo;
    }
};

void NhapPhanSo(vector<PhanSo>& MangPhanSo, int SoLuong) {
    for (int i = 0; i < SoLuong; ++i) {
        int tu, mau;
        cout << "Nhap tu so va mau so cua phan so thu " << i + 1 << ": ";
        cin >> tu >> mau;
        MangPhanSo.emplace_back(tu, mau);
    }
}

PhanSo TimPhanSoLonNhat(const vector<PhanSo>& MangPhanSo) {
    PhanSo LonNhat = MangPhanSo[0];
    for (const auto& ps : MangPhanSo) {
        if (ps.GiaTri() > LonNhat.GiaTri()) {
            LonNhat = ps;
        }
    }
    return LonNhat;
}

PhanSo TimPhanSoNhoNhat(const vector<PhanSo>& MangPhanSo) {
    PhanSo NhoNhat = MangPhanSo[0];
    for (const auto& ps : MangPhanSo) {
        if (ps.GiaTri() < NhoNhat.GiaTri()) {
            NhoNhat = ps;
        }
    }
    return NhoNhat;
}

int main() {
    int SoLuong;
    cout << "Nhap so luong phan so: ";
    cin >> SoLuong;

    vector<PhanSo> MangPhanSo;
    NhapPhanSo(MangPhanSo, SoLuong);

    PhanSo LonNhat = TimPhanSoLonNhat(MangPhanSo);
    PhanSo NhoNhat = TimPhanSoNhoNhat(MangPhanSo);

    cout << "Phan so lon nhat: " << LonNhat.TuSo << "/" << LonNhat.MauSo << endl;
    cout << "Phan so nho nhat: " << NhoNhat.TuSo << "/" << NhoNhat.MauSo << endl;

    return 0;
}
