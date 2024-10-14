#include <iostream>
#include <vector>
#include <algorithm>
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

bool SoSanhPhanSo(const PhanSo& a, const PhanSo& b) {
    return a.GiaTri() < b.GiaTri();
}

void NhapPhanSo(vector<PhanSo>& MangPhanSo, int SoLuong) {
    for (int i = 0; i < SoLuong; ++i) {
        int tu, mau;
        cout << "Nhap tu so va mau so cua phan so thu " << i + 1 << ": ";
        cin >> tu >> mau;
        MangPhanSo.emplace_back(tu, mau);
    }
}

int main() {
    int SoLuong, K;
    cout << "Nhap so luong phan so: ";
    cin >> SoLuong;
    cout << "Nhap so thu tu k: ";
    cin >> K;

    vector<PhanSo> MangPhanSo;
    NhapPhanSo(MangPhanSo, SoLuong);

    sort(MangPhanSo.begin(), MangPhanSo.end(), SoSanhPhanSo);

    if (K <= SoLuong) {
        PhanSo LonThuK = MangPhanSo[SoLuong - K];
        PhanSo NhoThuK = MangPhanSo[K - 1];

        cout << "Phan so lon thu " << K << ": " << LonThuK.TuSo << "/" << LonThuK.MauSo << endl;
        cout << "Phan so nho thu " << K << ": " << NhoThuK.TuSo << "/" << NhoThuK.MauSo << endl;
    }

    return 0;
}
